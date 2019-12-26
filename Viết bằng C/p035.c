#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//hàm kiểm tra số nguyên tố
int checkPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
//hàm kiểm tra số nguyên tố tròn
int circularPrime(int n)
{
   if(checkPrime(n)==0) return 0;
   int a=n,temp=0;
   while(a!=0) //đếm số chữ số của n
   {
      a=a/10;
      temp++;
   }
   double b=pow(10,temp-1);
   for(int i=1;i<temp;i++)//quay số và kiểm tra số đã quay
   {
      n = (n%10) * (int)b + (n/10);
      if(checkPrime(n)==0) return 0;
   }
   return 1;
}
int main()
{
    int count=1; //đã tính số 2
    for(int i=3;i<1000000;i+=2)
    {
      if(circularPrime(i)==1)
         count++;
    }
    printf("%d\n",count);
    return 0;
}
