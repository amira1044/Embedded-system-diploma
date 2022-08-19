#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha[26];
    char *p;
    int i;
    p=alpha;
    for(i=0;i<26;i++)
    {
        *p='A'+i;
        p++;
    }
    p=alpha;
    for(i=0;i<26;i++)
    {
        printf("%c  ",*p);
        p++;
    }
    return 0;
}
