#include <stdio.h>

int main() 
{
    char string[50];
    char *strptr;     
    int length = 0;

    printf("Enter string: ");
    gets(string); 

    strptr = string; 

     
    for (strptr=string; *strptr!='\0'; strptr++) 
	{
        length++;
    }

    printf("The length of the string is: %d\n",length);
}
