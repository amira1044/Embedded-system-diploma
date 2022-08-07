#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[2][2];
    float b[2][2];
    int r,c;
    printf("Enter the element of 1st matrix:\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("Enter a%d%d:",r+1,c+1);
            scanf("%f",&a[r][c]);
        }
    }
    printf("Enter the element of 2nd matrix:\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("Enter b%d%d:",r+1,c+1);
            scanf("%f",&b[r][c]);
        }
    }
    printf("\n Sum of matrix:\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%.1f\t",a[r][c]+b[r][c]);
        }
        printf("\r\n");
    }
    return 0;
}
