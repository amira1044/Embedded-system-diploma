#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,loc,i;
    float a[50],k;
    printf("Enter no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    printf("Enter the element to be inserted:");
    scanf("%f",&k);
    printf("Enter the location:");
    scanf("%d",&loc);
    for(i=n;i>=loc;i--)
        a[i]=a[i-1];
    n++;
    a[loc-1]=k;
    for(i=0;i<n;i++)
            printf("%.2f \t",a[i]);


    return 0;
}
