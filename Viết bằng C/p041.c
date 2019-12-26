#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//hàm đếm số chữ số của 1 số
int demSo(int n)
{
   int count=0;
   while(n!=0)
   {
      count++;
      n=n/10;
   }
   return count;
}
//hàm kiểm tra 1 số n chữ số hay không
int isPandigital(int n)
{
   int a=demSo(n);
   int arr[10]={0}; //mảng tránh lặp số
   int temp,count=0;
   while(n!=0) //lưu lại các chữ số của n vào mảng
   {
      temp= n%10;
      arr[temp]= 1;
      n=n/10;
   }
   for(int i=1;i<=a;i++)
   {
      if(arr[i]==1)
         count++;
   }
   if(count==a) return 1;
   else return 0;
}
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
int main()
{
    int i=987654321;
    while(i>0)
    {
       if(isPandigital(i) && isPrime(i))
       {
          printf("%d",i);
          break;
       }
       i-=2;
    }
    return 0;
}
