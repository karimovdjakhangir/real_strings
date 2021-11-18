//string8

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  char symbol;
  int N;

  printf ("Please kindly enter a symbol: ");
  scanf ("%c", &symbol);

  printf ("How many times to repeate a symbol: ");
  scanf ("%d", &N);

  for (int i = 0; i <= N; i++)
    {
      printf ("%c", symbol);
    }

  return 0;
}