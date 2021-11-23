//string28
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char S[100];

    printf("Enter a string: ");
    fgets(S, 100, stdin);

    int volume = strlen(S), N;

    printf("Volume of string: %d\nN=", volume);
    scanf("%d", &N);

    for(int i=0; i<volume-1; i++){
        printf("%c", S[i]);
        for(int j=0; j<N; j++){
            printf("*");
        }
    }

    printf("\n");


    return 0;
}