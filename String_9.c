//string9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char string1[100], string2[100];
  
  printf ("Please kindly enter 1st string: ");
  scanf ("%s", &string1);

  printf ("Please kindly enter 2nd string: ");
  scanf ("%s", &string2);
  
strcat(string1, string2);
printf("result of concatenation: %s\n", string1);
  
  
  
  return 0;
}