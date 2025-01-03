import runtime

def empty(x):
    pass

runtime.throttle=empty

n = 16
guess = [0] * n
#guess = [44, 50, 184, 53, 216, 88, 39, 180, 195, 175, 154, 182, 0, 0, 0, 0]
for i in range(n):
#for i in range(12, n):
    for j in range(0xff):
        guess[i] = j
        if i<runtime.check_combination(guess):
            break
print(guess)

guess = [44, 50, 184, 53, 216, 88, 39, 180, 195, 175, 154, 182, 29, 251, 69, 179]
runtime.check_combination(guess)

