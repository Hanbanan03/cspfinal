#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Hannah
//Game board
void displayHangman(int wrong) {
    if (wrong == 0) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    } 
    else if (wrong == 1) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |      O\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (wrong == 2) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |      O\n");
        printf(" |      |\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (wrong == 3) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |      O\n");
        printf(" |     /|\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (wrong == 4) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |      O\n");
        printf(" |     /|\\\n");
        printf(" |\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (wrong == 5) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |      O\n");
        printf(" |     /|\\\n");
        printf(" |     /\n");
        printf(" |\n");
        printf("_|_\n");
    }
    else if (wrong == 6) {
        printf("\n  _______\n");
        printf(" |      |\n");
        printf(" |      O\n");
        printf(" |     /|\\\n");
        printf(" |     / \\\n");
        printf(" |\n");
        printf("_|_   GAME OVER!\n");
    }
}

int main() {
    srand((unsigned)time(NULL));

    char name[20];
    char words[][20] = {
        "boo","blackcat","ghost","costume","knight","candy","decay",
        "sweets","screams","pumpkin","bats","mummy","snake","haunted",
        "werewolf","dracula","witch","scary"
    };

    char board[50];
    char wrongLetters[50];
    int wrong = 0;
    int victory = 0;

    // Introduction
    printf("Welcome to the Halloween Hangman game! Come play the game.\n");
    printf("What is your name? ");

    if (fgets(name, sizeof(name), stdin) == NULL) {
        name[0] = '\0';
    } else {
        for (int i = 0; name[i]; i++) {
            if (name[i] == '\n') { name[i] = '\0'; break; }
        }
    }

    int word = rand() % (sizeof(words) / sizeof(words[0]));
    char chosen_word[50];
    strcpy(chosen_word, words[word]);

    for (int i = 0; i < (int)strlen(chosen_word); i++) {
        board[i] = '_';
    }
    board[strlen(chosen_word)] = '\0';
    wrongLetters[0] = '\0';

    while (wrong < 6 && victory == 0) {
        char guess;
        int correct = 0;

        printf("\nWord: %s\n", board);
        printf("Wrong guesses: %s\n", wrongLetters);
        displayHangman(wrong);

        printf("Enter a letter: ");
        if (scanf(" %c", &guess) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }

        for (int i = 0; i < (int)strlen(chosen_word); i++) {
            if (chosen_word[i] == guess) {
                board[i] = guess;
                correct = 1;
            }
        }

        if (!correct) {
            size_t len = strlen(wrongLetters);
            wrongLetters[len] = guess;
            wrongLetters[len + 1] = '\0';
            wrong++;
        }

        if (strcmp(board, chosen_word) == 0) {
            victory = 1;
        }
    }

    if (victory == 1) {
        printf("\nGood job %s! You guessed the word right!\n", name);
    } else {
        printf("\nYou lost. The word was: %s.\n", chosen_word);
    }

    return 0;
}
