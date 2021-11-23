//String10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {  
    char a[100];
    printf("Enter a string to reverse: ");
    fgets(a, sizeof(a), stdin);
    int volume = strlen(a);
    for(char i=volume-1; i>=0; i--){
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}