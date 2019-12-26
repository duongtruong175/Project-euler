#include <stdio.h>
#include <math.h>
//hàm kiểm tra số nguyên tố
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
//hàm đếm số thừa số nguyên tố riêng biệt
int countPrime(int n)
{
	int count=0; //biến đếm thừa số nguyên tố
	int i=2;
	while(n!=1)
   {
      if(n%i==0 && isPrime(i))
      {
         count++;
         while(n%i==0)//chia dần đến khi không chia được tiếp
            n/=i;
      }
      i++;
   }
	return count;
}
int main()
{
   int result=2*3*5*7;//số đầu tiên tạo bởi 4 thừa số nguyên tố
   while(1)
   {
      if(countPrime(result)==4&&countPrime(result+1)==4&&countPrime(result+2)==4&&countPrime(result+3)==4)
      {
         printf("%d",result);
         break;
      }
      result++;
   }
   return 0;
}
