//String10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];

    printf("Master, please kindly enter any string you wish: ");
    fgets(string, sizeof(string), stdin);

    int volume = strlen(string), n;

    printf("Master, please be informed that your string consists of: %d characters\nMaster, please kindly enter number of spaces to add in between of the string: ", volume);
    scanf("%d", &n);

    for(int i=0; i<volume-1; i++){
        printf("%c", string[i]);
        for(int j=0; j<n; j++){
            printf(" ");
        }
    }
    printf("\nYou are a True Genius\n");
    return 0;
}