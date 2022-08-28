#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415
#define area(r) pi*r*r
int main()
{
    float r,a;
    printf("Enter the radius:");
    scanf("%f",&r);
    printf("Area=%2f",area(r));
    return 0;
}
