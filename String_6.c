//String6

#include <stdio.h>
int main()
{
    char a;
    printf("Enter symbol: ");
    scanf("%c", &a);

    if (a >= 48 && a <= 57)
    {
        printf("%c is a digit\n", a);
    }
    if (a >= 65 && a <= 90)
    {
        printf("%c is a letter\n", a);
    }
     if (a >= 97 && a <= 122)
    {
        printf("%c is a letter\n", a);
    }else
    {
        printf("0\n");
    }

return 0;
}