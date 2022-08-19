#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int a[20];
    int *ptr;
    printf("Enter the number of elements(max 20):");
    scanf("%d",&n);
    ptr=a;
    printf("Enter the element of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("element-%d :",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&a[n-1];
    printf("The elements of array in reverse order are :\n");
    for(i=n;i>0;i--)
    {
       printf("element-%d : %d\n",i,*ptr);
       ptr--;
    }
    return 0;
}
