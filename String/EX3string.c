#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[50];
    int i,k;
    printf("Enter the string:");
    gets(x);
    k=strlen(x);
    printf("Reverse string is:");
    for(i=1;i<=k;i++)
        {
            printf("%c",x[k-i]);
        }
    return 0;
}
