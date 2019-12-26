#include <stdio.h>
#include <math.h>
//hàm kiểm tra số ngũ giác
int isPentagonal(int n)
{
   for(int i=1;i*i<n;i++)
   {
      int a= i*(3*i-1)/2;
      if(a==n) return 1;
   }
   return 0;
}
int main()
{
   int i=1,a,b;
   int temp=1;
   while(temp==1)
   {
      i++;
      a= i*(3*i-1)/2;
      for(int j=i-1;j>0;j--)
      {
         b= j*(3*j-1)/2;
         if(isPentagonal(a-b) && isPentagonal(a+b))
         {
            printf("%d",a-b);
            temp=0;//thoát vòng while
            break;//thoát vòng for
         }
      }
   }
   return 0;
}
