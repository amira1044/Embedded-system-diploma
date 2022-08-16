#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an alphabet:");
    scanf("%c/n",&c);
    if(c=='a'||c=='A'||c=='O'||c=='o'||c=='u'||c=='U'||c=='i'||c=='I'||c=='e'||c=='E')
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a constant",c);
    }
    return 0;
}
