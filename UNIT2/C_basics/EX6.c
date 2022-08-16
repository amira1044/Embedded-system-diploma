#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a; float b; float c;
   printf("Enter value of a:");
   scanf("%f",&a);
   printf("Enter value of b:");
   scanf("%f",&b);
   c=a;
   a=b;
   b=c;
   printf("After swapping,the value of a=%f\nAfter swapping,the value of b=%f",a,b);
    return 0;
}
