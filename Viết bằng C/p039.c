#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int temp,p=1,max=0;
    while(p<=1000) //p la gia tri chu vi
    {
       int count=0; //dem so bo 3 thoa man
       for(int i=1;i<p;i++)
       {
         for(int j=p-i;j>i;j--)
            if(i+j+sqrt(i*i+j*j)==p)
               count++;
       }
       if(count>max)
       {
          max=count;
          temp=p;
       }
       p++;
    }
    printf("%d",temp);
    return 0;
}
