//string7
/* A program indicating the first and the last symbol
in a string*/
#include <stdio.h>
#include <stdlib.h>

int main() {  
    char string[100];
    printf("Enter a string: ");
    scanf("%s", &string);
    int volume = strlen(string);
    printf("The first symbol of a string is: %d \n", string[0]);
    printf("The first symbol of a string is: %d \n", string[volume-1]);
    return 0;
}