//String_18 replace small and capital letters with vise versa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char string[]="FfUuCcKk", after;

int size=strlen(string);

for (int i=0; i<=size; i++){
    if(string[i]>='a' && string[i]<='z'){
        after=string[i]-32;
        printf("%c\t", after);
    }
}
  printf("\n");
  for (int i=0; i<=size; i++){
    if(string[i]>='A' && string[i]<='Z'){
        after=string[i]+32;
        printf("%c\t", after);
    }
}
  printf("\n");
  return 0;
}