#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10][10],b[10][10];
    int r,c,i,j;
    printf("Enter number of rows and columns of the matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter elements of matrix:\n");
    for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
       {
           printf("Enter elements a%d%d:",i+1,j+1);
           scanf("%f",&a[i][j]);
       }
       }
    printf("Entered matrix:\n");
    for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
       {
           printf("%f\t",a[i][j]);
       }
       printf("\r\n");
       }
     for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
       {
           b[j][i]=a[i][j];
       }
       }
     printf("Transpose of matrix:\n");
     for(i=0;i<c;i++)
       {
           for(j=0;j<r;j++)
       {
          printf("%f\t",b[i][j]);
       }
          printf("\r\n");
       }

    return 0;
}
