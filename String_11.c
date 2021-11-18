//String11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter a string to mix with spaces: ");
    fgets(string, 100, stdin);

    int volume = strlen(string), n, a=32;
    printf("volume:%d\n,n=", volume);

    for (int i = 0; i <= volume - 1; i++)
    {
        printf("%c", string[i]);
        for (int j = 0; j < n; j++)
        {
            printf("%c", a);
        }
    }
    printf("\n");
    return 0;
}