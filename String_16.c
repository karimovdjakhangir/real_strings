//String_16 replace capital letters with small letters

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char string[]="098203r874lkADSdghlkj99", after;

int size=strlen(string);

for (int i=0; i<=size; i++){
    if(string[i]>='A' && string[i]<='Z'){
        after=string[i]+32;
        printf("%c\t", after);
    }
}
  printf("\n");
  return 0;
}