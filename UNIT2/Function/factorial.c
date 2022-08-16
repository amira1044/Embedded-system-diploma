#include <stdio.h>
#include <stdlib.h>
int fact(int x);
int main()
{
    int z;
    printf("Enter integer number:");
    scanf("%d",&z);
    printf("The fractional of %d=%d",z,fact(z));

    return 0;
}
int fact(int x)
{
    if (x!=1)
        return x*fact(x-1);
}
