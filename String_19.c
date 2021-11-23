//String_19 replace small and capital letters with vise versa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char string[100], after;
  printf("Enter input: ");
  fgets(string, 100, stdin);
  int size = strlen(string);

  for (int i = 0; i <= size; i++)
  {
    if (string[i] >= '1' && string[i] <= '9')
    {
      printf("1\n");
    }
    else if (string[i] >= '.')
    {
      printf("2\n");
    }
    else 
    {
      printf("0\n");
    }
  } printf("\n");
  return 0;
}