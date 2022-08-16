#include <stdio.h>
#include <stdlib.h>
int pow(int a,int b);
int main()
{
    int b,p,res;
    printf("Enter base number:");
    scanf("%d",&b);
    printf("Enter power number'positive integer'");
    scanf("%d",&p);
    res=pow(b,p);
    printf("%d",res);
    return 0;
}
int pow(int a,int b)
{
    static int s=1;
    if (b>0)
    {
        s=s*a;
        b--;
        pow(a,b);
    }
    return s;
}
