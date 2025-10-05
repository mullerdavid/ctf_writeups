#include <array>
#include <arpa/inet.h>
#include <ctime>
#include <cstring>
#include <iostream>
#include <limits>
#include <netinet/in.h>
#include <string>
#include <sys/socket.h>
#include <thread>
#include <unistd.h>

// FLAG
const std::string flag = "[REDACTED]";

// const global variables
const int rps_size = 3;
const std::array<std::string, rps_size> beats = {"paper", "scissor", "rock"};
const std::array<std::string, rps_size> choices = {"rock", "paper", "scissor"};

// prototypes
void handleClient(int client_fd);
std::string getChoice(int client_fd);
int getRandomNum();
bool play(int client_fd);
void sendMsg(int client_fd, const std::string &msg);
std::string recvMsg(int client_fd);

int main()
{
    srand(time(0));

    int server_fd;
    struct sockaddr_in address{};
    int opt = 1;

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)))
    {
        perror("setsockopt");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(41111);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
    {
        perror("bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    if (listen(server_fd, 10) < 0)
    {
        perror("listen");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    std::cout << "Server listening on port 41111..." << std::endl;

    while (true)
    {
        socklen_t addrlen = sizeof(address);
        int client_fd = accept(server_fd, (struct sockaddr *)&address, &addrlen);
        if (client_fd < 0)
        {
            perror("accept");
            continue;
        }

        // spawn thread for this client
        std::thread t(handleClient, client_fd);
        t.detach(); // run independently
    }

    close(server_fd);
    return 0;
}

void handleClient(int client_fd)
{
    int wins = 0;

    while (wins < 5)
    {
        sendMsg(client_fd,
                "Current number of wins: " + std::to_string(wins) + "\n");
        sendMsg(client_fd, "Fancy a game of rock, paper, scissors?\n");
        sendMsg(client_fd, "Press 1 to play a game\n");
        sendMsg(client_fd, "Press 2 to exit the game\n");

        std::string input = recvMsg(client_fd);
        if (input.empty())
            break;

        int choice;
        try
        {
            choice = std::stoi(input);
        }
        catch (...)
        {
            sendMsg(client_fd, "Invalid input, please enter a number!\n");
            continue;
        }

        if (choice == 1)
        {
            if (play(client_fd))
            {
                wins++;
            }
            else
            {
                wins = 0;
            }
        }
        else if (choice == 2)
        {
            close(client_fd);
            return;
        }
        else
        {
            sendMsg(client_fd, "Please choose a valid number!\n");
        }
    }

    if (wins >= 5)
    {
        sendMsg(client_fd, "Congrats! Here is your flag: " + flag + "\n");
    }

    close(client_fd);
}

std::string getChoice(int client_fd)
{
    int choice = 0;
    while (true)
    {
        sendMsg(client_fd, "Enter your choice (1-3)\n");
        sendMsg(client_fd, "1:Rock, 2:Paper, 3:Scissor\n");

        std::string input = recvMsg(client_fd);
        if (input.empty())
            return "";

        try
        {
            choice = std::stoi(input);
        }
        catch (...)
        {
            sendMsg(client_fd, "Invalid input, please enter a number!\n");
            continue;
        }

        if (choice < 1 || choice > 3)
        {
            sendMsg(client_fd, "Please provide a correct number (1-3)\n");
        }
        else
        {
            break;
        }
    }
    return choices[choice - 1];
}

int getRandomNum()
{
    return rand() % 3;
}

bool play(int client_fd)
{
    int r = getRandomNum();
    std::string players_hand = getChoice(client_fd);
    if (players_hand.empty())
        return false;
    std::string computers_hand = choices[r];

    sendMsg(client_fd, "Your hand: " + players_hand + "\n");
    sendMsg(client_fd, "Computer's hand: " + computers_hand + "\n");

    if (players_hand == beats[r])
    {
        sendMsg(client_fd, "Congrats you win!\n");
        return true;
    }
    else if (players_hand == computers_hand)
    {
        sendMsg(client_fd, "It's a draw!\n");
        return false;
    }
    else
    {
        sendMsg(client_fd, "You lose!\n");
        return false;
    }
}

// --- helpers ---
void sendMsg(int client_fd, const std::string &msg)
{
    send(client_fd, msg.c_str(), msg.size(), 0);
}

std::string recvMsg(int client_fd)
{
    char buffer[1024];
    memset(buffer, 0, sizeof(buffer));
    int bytes = recv(client_fd, buffer, sizeof(buffer) - 1, 0);
    if (bytes <= 0)
    {
        return "";
    }
    return std::string(buffer, bytes);
}
