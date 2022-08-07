#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,loc=0;
    float a[10],k;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    if(n>10||n<=0)
    {
        printf("Error!!! Enter a number between 0 and 10");
        printf("\nEnter the no. of elements again:");
        scanf("%d",&n);
    }
    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%f",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
         loc=i;
         break;
        }
    }
    if(loc>0)
        printf("Number found at the location=%d",i+1);
    else
        printf("Number not found");

    return 0;
}
