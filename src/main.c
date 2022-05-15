#include <stdio.h>
#include "espl_lib.h"


int main(int argc, char *argv[]) {
    int input;
    char answer;
    int c;
    while(answer!='n'){
        printf("Please type in your positive number(s): \n");
        if(scanf("%i", &input) == 0 || input < 0){
            printf("Invalid input! Please enter psoitive numbers! \n");
            while ((c = getchar()) != '\n' && c != EOF) { }
        }
        else{
            char* output = num_to_words(input);
            printf("Your number(s) in words from last to first number: %s \n", output);
            printf("Do you want to try out a different number(y/n)? \n");
            getchar();
            scanf("%c", &answer);
            while (answer!='y' && answer!='n'){
                printf("Invalid answer! Please type in y or n! \n");
                getchar();
                scanf("%c", &answer);
            }
        }
    }
    return 0;
}