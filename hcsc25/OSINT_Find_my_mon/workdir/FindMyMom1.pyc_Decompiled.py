# Decompiled with PyLingual (https://pylingual.io)
# Internal filename: FindMyMom1.py
# Bytecode version: 3.12.0rc2 (3531)
# Source timestamp: 1970-01-01 00:00:00 UTC (0)

global final_input_active
global final_input_text
global error_timer
global current_text_index
global input_active
global input_text
global showing_secondary_final_text
global game_stage
global showing_secondary_text
global error_message
import pygame
import hashlib
import os
import textwrap
pygame.init()
WIDTH, HEIGHT = (720, 640)
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption('OSINT CTF Game')
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GRAY = (200, 200, 200)
RED = (255, 0, 0)
font = pygame.font.Font(None, 32)
base_path = os.path.dirname(os.path.abspath(__file__))
try:
    background_start = pygame.transform.scale(pygame.image.load(os.path.join(base_path, 'start.webp')), (WIDTH, HEIGHT))
    background_text = pygame.transform.scale(pygame.image.load(os.path.join(base_path, 'hanna.webp')), (WIDTH, HEIGHT))
    background_final = pygame.transform.scale(pygame.image.load(os.path.join(base_path, 'mom.webp')), (WIDTH, HEIGHT))
    background_end = pygame.transform.scale(pygame.image.load(os.path.join(base_path, 'together.webp')), (WIDTH, HEIGHT))
except pygame.error as e:
    pass
else:
    texts = ["Hi, I got separated from my mom and now I can't find her. Please help me find her!", "If you don't know where I am, Three words I'll give to you,\nCharging through the forest green,\nStarting fresh and new.\nFollow these simple fines,\nAnd you'll find me in no time."]
    final_texts = ["I remember now, I was at a playground with my mom. Here's a picture of her, so it might be easier to find her. She also taught me a poem about this.", "If you can't find your mom, don't feel so blue,\nUse her picture, and she'll come to you.\nHer smile will guide you, her love will show,\nThat she's always near, wherever you go."]
    thank_you_text = 'Thank you!'
    current_text_index = 0
    error_message = ''
    error_timer = 0
    showing_secondary_text = False
    showing_secondary_final_text = False
    game_stage = 'start'
    SECRET_KEY = 'some_random_secret_key'
    CORRECT_HASH_1 = hashlib.sha256(('CtfMother' + SECRET_KEY).encode()).hexdigest()
    CORRECT_HASH_2 = hashlib.sha256(('CtfPlayground' + SECRET_KEY).encode()).hexdigest()
    input_text = ''
    input_active = False
    final_input_text = ''
    final_input_active = False
    mother_image = None

    def hash_input(text):
        return hashlib.sha256((text + SECRET_KEY).encode()).hexdigest()

    def draw_text(surface, text, x, y, max_width=700):
        lines = textwrap.wrap(text, width=60)
        for i, line in enumerate(lines):
            rendered_text = font.render(line, True, BLACK)
            surface.blit(rendered_text, (x, y + i * 30))

    def draw_text_box(surface, text, x, y, align_bottom_center=False):
        lines = textwrap.wrap(text, width=60)
        box_height = len(lines) * 30 + 20
        box_width = max([font.size(line)[0] for line in lines]) + 20
        if align_bottom_center:
            x = (WIDTH - box_width) // 2
            y = HEIGHT - box_height - 30
        pygame.draw.rect(surface, WHITE, (x, y, box_width, box_height))
        pygame.draw.rect(surface, BLACK, (x, y, box_width, box_height), 2)
        draw_text(surface, text, x + 10, y + 10)

    def draw_error(surface, message):
        if message:
            error_font = pygame.font.Font(None, 36)
            error_surface = error_font.render(message, True, RED)
            surface.blit(error_surface, (WIDTH // 2 - error_surface.get_width() // 2, HEIGHT - 130))

    def game_loop():
        global game_stage
        global showing_secondary_text
        global error_message
        global showing_secondary_final_text
        global input_text
        global input_active
        global error_timer
        global final_input_text
        global final_input_active
        clock = pygame.time.Clock()
        running = True
        while running:
            screen.fill(WHITE)
            if game_stage == 'start' and background_start:
                screen.blit(background_start, (0, 0))
            elif game_stage == 'text' and background_text:
                screen.blit(background_text, (0, 0))
            elif game_stage == 'final_input' and background_final:
                screen.blit(background_final, (0, 0))
            elif game_stage == 'end' and background_end:
                screen.blit(background_end, (0, 0))
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    running = False
                elif event.type == pygame.KEYDOWN:
                    if input_active:
                        if event.key == pygame.K_RETURN:
                            if hash_input(input_text) == CORRECT_HASH_1:
                                game_stage = 'final_input'
                                error_message = ''
                                input_active = False
                            else:
                                error_message = 'Incorrect code. Try again!'
                                error_timer = pygame.time.get_ticks()
                            input_text = ''
                        elif event.key == pygame.K_BACKSPACE:
                            input_text = input_text[:-1]
                        else:
                            input_text += event.unicode
                    elif final_input_active:
                        if event.key == pygame.K_RETURN:
                            if hash_input(final_input_text) == CORRECT_HASH_2:
                                game_stage = 'end'
                                error_message = ''
                                final_input_active = False
                            else:
                                error_message = 'Incorrect code. Try again!'
                                error_timer = pygame.time.get_ticks()
                            final_input_text = ''
                        elif event.key == pygame.K_BACKSPACE:
                            final_input_text = final_input_text[:-1]
                        else:
                            final_input_text += event.unicode
                elif event.type == pygame.MOUSEBUTTONDOWN:
                    x, y = event.pos
                    if game_stage == 'start':
                        game_stage = 'text'
                    elif game_stage == 'text':
                        if not showing_secondary_text:
                            showing_secondary_text = True
                        elif 200 < x < 600 and HEIGHT - 80 < y < HEIGHT - 30:
                            input_active = True
                    elif game_stage == 'final_input':
                        if not showing_secondary_final_text:
                            showing_secondary_final_text = True
                        elif 200 < x < 600 and HEIGHT - 80 < y < HEIGHT - 30:
                            final_input_active = True
                    elif game_stage == 'end':
                        running = False
            if game_stage == 'text':
                index = 1 if showing_secondary_text else 0
                draw_text_box(screen, texts[index], 50, 30)
                pygame.draw.rect(screen, WHITE, (200, HEIGHT - 80, 400, 50))
                pygame.draw.rect(screen, BLACK if input_active else GRAY, (200, HEIGHT - 80, 400, 50), 2)
                draw_text(screen, input_text, 210, HEIGHT - 70)
            elif game_stage == 'final_input':
                if mother_image:
                    screen.blit(mother_image, (250, 100))
                index = 1 if showing_secondary_final_text else 0
                draw_text_box(screen, final_texts[index], 50, 30)
                pygame.draw.rect(screen, WHITE, (200, HEIGHT - 80, 400, 50))
                pygame.draw.rect(screen, BLACK if final_input_active else GRAY, (200, HEIGHT - 80, 400, 50), 2)
                draw_text(screen, final_input_text, 210, HEIGHT - 70)
            elif game_stage == 'end':
                draw_text_box(screen, thank_you_text, 0, 0, align_bottom_center=True)
            if error_message and pygame.time.get_ticks() - error_timer < 3000:
                draw_error(screen, error_message)
            pygame.display.flip()
            clock.tick(60)
        pygame.quit()
    game_loop()
    print(f'Error loading image: {e}')
    background_start = background_text = background_final = background_end = mother_image = None