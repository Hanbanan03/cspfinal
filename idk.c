#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_WRONG 6

void print_hangman(int wrong)
{
    if (wrong < 0) wrong = 0;
    if (wrong > MAX_WRONG) wrong = MAX_WRONG;

    printf(" |__|\n");

    /* head */
    if (wrong >= 1) printf(" |   O\n");
    else printf(" |    \n");

    /* body / arms */
    if (wrong == 2) printf(" |   |\n");
    else if (wrong == 3) printf(" |  /|\n");
    else if (wrong >= 4) printf(" |  /|\\\n");
    else printf(" |    \n");

    /* legs */
    if (wrong == 5) printf(" |  / \n");
    else if (wrong >= 6) printf(" |  / \\\n");
    printf(" |______\n");
    return;
}
    



//#include <stdio.h>
//#include <string.h>
///* Logical Operators
//&& and 
//|| or 
//! not*/



//CONDITIONALS NOTES
//int main(void) {
    //int grade;
    //char name[20];
    //printf("What is your grade in percent? ");
    //scanf("%d", &grade);

    //printf("What is your name? ");
    //scanf("%s", &name);


    //printf("%d\n", strcmp(name, "Archie") == 0);
    //if(name == "Archie"){
     //   printf("Hello Archie!\n");
    //}else if(grade >= 90){
    //   printf("You have an A!\n");
    //}else if(grade >= 80){
    //    printf("You have a B!\n");
    //}else if(grade >= 70){
    //     printf("You have a C!\n");
    //}else{
    //     printf("You are failing!\n");
    //}
    
    

    
   // return 0;
//}








//What puts something inside of the “if” statement?
//  parentheses ()
//How are conditions written in C?
// if, else if, and else
//How do we write elif conditions in C?
// else if
//When do else conditions run?
// by default if no other conditions are met
//What are the 3 logical operators in C?
// &&, ||, !