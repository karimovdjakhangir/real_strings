#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100],c;  
    int  i;
 
    printf("Enter the string: ");
    scanf("%c", &s);
    
	printf("Enter a character to double: ");
    scanf("%c", &c);
    
    printf("\n before replace:%s",s);
    for(i=0;s[i];i++)
	{  
		if(s[i]==c)
		{
		   s[i]=c;
	 
	    }
 
	}
	   
    printf("\nafter replace:%s\n",s);
 	 
     
    return 0;
}