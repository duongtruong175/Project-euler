#include <stdio.h>
#include <math.h>
int main()
{
    int count=0;
    int n=1;
    while(1)
    {
       int limit= log10(pow(9,n))+1;//số chữ số của 9^n
       if(limit<n) break;
       for(int i=1;i<10;i++)
       {
          int temp= log10(pow(i,n))+1;//số chữ số của i^n
          if(temp==n)
            count++;
       }
       n++;
    }
    printf("%d",count);
    return 0;
}
