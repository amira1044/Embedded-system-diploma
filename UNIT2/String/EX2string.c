#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[20];
    int i,count=0;
    printf("Enter a string: ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
        count++;
    printf("Length of string=%d",count);
    return 0;
}
