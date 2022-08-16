#include <stdio.h>
#include <stdlib.h>
int prime(int x);
int main()
{
    int num1,num2,i,a=0;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers between %d and %d= ",num1,num2);
    for(i=num1;i<=num2;i++)
    {
        a=prime(i);
        if(a==0)
            printf("%d ",i);

    }
    return 0;
}
int prime(int x)
{
    int i,j=0;
    for(i=2;i<=(x/2);i++)
    {
        if((x%i)==0)
           {
               j=1;
               break;
           }
    }
     return j;
}
