#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i;
    printf("Enter a number:");
    scanf("%f",&i);
    if(i==0)
    {
        printf("You entered a zero");
    }
    else if(i>0)
    {
        printf("%.3f is positive",i);
    }
    else
    {
        printf("%.3f is negative",i);
    }
    return 0;
}
