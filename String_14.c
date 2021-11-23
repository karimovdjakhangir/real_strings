//String_14 Searching for the number of Capital letters

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char string[]="098203r874lkADSdghlkj99";

int size=strlen(string), count;
printf("The size of the stirng: %d\n", size);

for (int i=0; i<=size; i++){
    if(string[i]>='A' && string[i]<='Z'){
        count++;
    }
}
printf("Quantity of capital letters: %d\n", count);
    return 0;
}