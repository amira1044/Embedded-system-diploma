#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[50];
    char*p;
    int n,i;
    printf("Enter a string:");
    gets(s);
    n=strlen(s);
    p=&s[n-1];
    printf("Reverse of the string is:\n");
    for(i=0;i<n;i++)
    {
        printf("%c",*p);
        p--;
    }
    return 0;
}
