//IL,Ak,AH.HW 7th hangman final
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Archie  
//introduction to game

int main(void){
    srand(time(NULL));
    char name[20];
    printf("Welcome to the Halloween hangman game! Well, come play the game.\n");
    printf("What is your name? ");
    if (fgets(name, sizeof name, stdin) == NULL) {
        name[0] = '\0';
    } else {
        for (int i = 0; name[i]; ++i) {
            if (name[i] == '\n') { name[i] = '\0'; break; }
        }
    }
    //Hannah-
    //Make the hang man picture and wrong guesses.

    if (wrong < 0) wrong = 0;

 

    //arthur
    srand(time(NULL));
    char words[10][10] = ("boo", "black_cat", "ghost", "costume", "knight", "candy", "decay", "sweets", "screams", "pumpkin", "bats", "mummy", "snake_mummy", "Stab", "haunted" ,"Frankenstein", "werewolf", "dracula", "batman", "witch", "yeti", "scary", "screms");
    int num = rand() % 23;
    char chosen_word[] = words[num];// can anyone thcing else for the list that are not people in this grope or part of decay

//
    if (victory == yes){//what is the condishion for this comdishional and where is the else statment I only see a if and an else if statment no else statment.
        printf("congrats you guessed the word correctly!\n");
    }else if (victory == no){
        printf("you lost, you did not guess the right letters the word is %s.\n", chosen_word);
    }else{
        printf("the game is broken start over")
    }


    return 0;
}



