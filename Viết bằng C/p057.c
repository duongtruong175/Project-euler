#include <stdio.h>
#include <stdlib.h>
//hàm so sánh tử số có nhiều chữ số hơn mẫu số ?
int check(long long int a,long long int b)
{
   int count1=0;
   while(a!=0)
   {
      count1++;
      a/=10;
   }
   int count2=0;
   while(b!=0)
   {
      count2++;
      b/=10;
   }
   return count1>count2?1:0 ;
}
int main()
{
    int count=0;
    long long int tuso=3;
    long long int mauso=2;
    for(int i=2;i<=1000;i++)
    {
       tuso= tuso + 2 * mauso;
       mauso= tuso - mauso;
       if(check(tuso,mauso)==1)
         count++;
       printf("%lld   %lld\n",tuso,mauso);
    }
    printf("%d",count);
    return 0;
}
