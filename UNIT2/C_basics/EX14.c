#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1;
    int n,i;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error!!! factorial of negative number doesnot exist");
    }
    else if(n=0)
    {
        printf("Factorial of 0=1");
    }
    else
    {
        for(i=1;i<=n;i++)
            fact*=i;
        printf("Factorial of %d=%d",n,fact);
    }
    return 0;
}
