#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
   printf("Enter the first number:");
   scanf("%f",&x);
   printf("\nEnter the second number:");
   scanf("%f",&y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("After swapping,the first number=%f",x);
   printf("\nAfter swapping,the second number=%f",y);
}
