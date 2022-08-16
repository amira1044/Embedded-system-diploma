#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter an integer you want to check:");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("%d is even",i);
    }
    else
    {
       printf("%d is odd",i) ;
    }
}
