#include <stdio.h>
#include <stdlib.h>
struct Complex
{
    float r;
    float i;
}n1,n2,sum;
struct Complex add (struct Complex x,struct Complex y)
{
    struct Complex z;
    z.r=x.r+y.r;
    z.i=x.i+y.i;
    return z;
};
int main()
{
    printf("First complex number:\n");
    printf("Enter the real and imaginary part respictively:");
    scanf("%f %f",&n1.r,&n1.i);
    printf("Second complex number:\n");
    printf("Enter the real and imaginary part respictively:");
    scanf("%f %f",&n2.r,&n2.i);
    sum=add(n1,n2);
    printf("sum=%.2f+%.2fi",sum.r,sum.i);
    return 0;
}
