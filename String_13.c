//String_13 searching for number of digits

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char string[]="098203r874lksdghlkj99";

int size=strlen(string), count;
printf("The size of the stirng: %d\n", size);

for (int i=0; i<=size; i++){
    if(string[i]>='0' && string[i]<='9'){
        count++;
    }
}
printf("Quantity of numbers: %d\n", count);
    return 0;
}