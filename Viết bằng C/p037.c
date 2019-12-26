#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//hàm kiểm tra số nguyên tố
int checkPrime(int n)
{
   if(n<=1) return 0;
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
//hàm kiểm tra số nguyên tố cắt từ phải sang trái
int primeRight(int n)
{
   while(n!=0)
   {
      if(checkPrime(n)==0) return 0;
      n=n/10;
   }
   return 1;
}
//hàm kiểm tra số nguyên tố cắt từ trái sang phải
int primeLeft(int n)
{
   int temp=10;
   while(n/temp!=0)
   {
      if(checkPrime(n%temp)==0) return 0;
      temp= temp*10;
   }
   return 1;
}
int main()
{
    //bắt đầu từ 11 sau đó tăng 2 vì số nguyên tố là số lẻ(trừ 2)
    int count=0,sum=0,i=11;
    while(count<11) //vì chỉ tồn tại 11 số nguyên tố cắt ngắn
    {
       if(primeRight(i) && primeLeft(i))
       {
          sum+=i;
          count++;
       }
       i+=2;
    }
    printf("%d",sum);
    return 0;
}
