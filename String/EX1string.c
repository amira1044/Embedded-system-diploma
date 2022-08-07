#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sen[30],x;
    int i,count=0;
    printf("Enter a string:");
    gets(sen);
    printf("Enter a character to find frequency:");
    scanf("%c",&x);
    for(i=0;i<strlen(sen);i++)
    {
        if(sen[i]==x)
          count++;
    }
    printf("Frequency of %c =%d",x,count);
    return 0;
}
