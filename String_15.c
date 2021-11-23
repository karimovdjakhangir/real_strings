//String_14 Searching for the number of Capital letters

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char string[]="дежзий098203r874lkADSdghlkj99";

int size=strlen(string), count;
printf("The size of the stirng: %d\n", size);

for (int i=0; i<=size; i++){
    if(string[i]>='A' && string[i]<='Z' && string[i]>='а' && string[i]<='я'){
        count++;
    }
}
printf("Quantity of small English or Cyrillic letters: %d\n", count);
    return 0;
}