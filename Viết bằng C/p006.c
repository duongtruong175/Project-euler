#include <stdio.h>
#include <stdlib.h>

int main()
{   int s,s1=0,s2=0;
    for(int i=1;i<=100;i++)
    {
       s1=s1+i*i;
       s2=s2+i;
    }
    s=s2*s2-s1;
    printf("so can tim la %d",s);
    return 0;
}
