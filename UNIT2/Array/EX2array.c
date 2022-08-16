#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[50],sum=0,avg;
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    if(n>50||n<=0)
    {
        printf("Error!!! number should be in range of 1 to 50");
        printf("\n Enter the number of element again");
        scanf("%d",&n);
    }
    for(i=0;i<n;i++)
    {
        printf("%d. Enter number:",i+1);
        scanf("%f",&num[i]);
        sum+=num[i];
    }
    avg=sum/n;
    printf("\n Average=%f",avg);

    return 0;
}
