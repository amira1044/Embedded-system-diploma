#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o;
    float a,b;
    printf("Enter an operand either + or - or * or /:");
    scanf("%c",&o);
    printf("Enter two operands:");
    scanf("%f%f",&a,&b);
    switch(o)
    {
        case ('+'):
            printf("%f + %f=%f",a,b,a+b);
            break;
        case('-'):
            printf("%f - %f=%f",a,b,a-b);
            break;
        case('*'):
            printf("%f * %f=%f",a,b,a*b);
            break;
        case('/'):
            printf("%f / %f=%f",a,b,a/b);
            break;
        default:
        printf("You entered a wrong operator!!!!!!");
        break;
    }
    return 0;
}
