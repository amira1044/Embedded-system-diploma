#include <stdio.h>
#include <stdlib.h>
struct distance
{
    int feet;
    float inches;
};
struct distance add (struct distance x,struct distance y)
{
    struct distance z;
    z.feet=x.feet+y.feet;
    z.inches=x.inches+y.inches;
    if(z.inches>12)
    {
        z.feet++;
        z.inches-=12;
    }
    return z;
};
int main()
{
    struct distance d1,d2,sum;
    printf("Enter information of 1st distance\n");
    printf("Enter feet:");
    scanf("%d",&d1.feet);
    printf("Enter inches:");
    scanf("%f",&d1.inches);
    printf("Enter information of 2nd distance\n");
    printf("Enter feet:");
    scanf("%d",&d2.feet);
    printf("Enter inches:");
    scanf("%f",&d2.inches);
    sum=add(d1,d2);
    printf("Sum of distance=%d-%.1f",sum.feet,sum.inches);
    return 0;
}
