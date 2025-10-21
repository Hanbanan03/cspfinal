//IL,Ak,AH.HW 7th hangman final
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Archie  
//introduction to game

int main(void){
    
    char name[20];
    printf("Welcome to the Halloween hangman game! Well, come play the game.\n");
    printf("What is your name? ");
    if (scanf("%99s", name) != 1) name[0]  '\0';
    printf("hello, %s\n", name);
    
    srand(time(NULL));
    char words[][10] = "boo", "cat", "ghost", "costume", "knight", "candy", "decay", "sweets", "screams" 


//


    return 0;
}





