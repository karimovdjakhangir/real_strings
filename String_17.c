//String_17 replace small letters with capital letters

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char string[]="KDFfSEIYuFCLKEFcLKNEHJRFkWIU", after;

int size=strlen(string);

for (int i=0; i<=size; i++){
    if(string[i]>='a' && string[i]<='z'){
        after=string[i]-32;
        printf("%c\t", after);
    }
}
  printf("\n");
  return 0;
}