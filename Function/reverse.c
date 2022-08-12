#include <stdio.h>
#include <stdlib.h>
void Rsent();
int main()
{
    printf("Enter a setence,when you finish press enter:");
    Rsent();
    return 0;
}
void Rsent()
{
    char ch;
    scanf("%c",&ch);
    if(ch!='\n')
    {
        Rsent();
        printf("%c",ch);
    }

}

