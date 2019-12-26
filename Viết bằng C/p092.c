#include <stdio.h>
#include <stdlib.h>
//hàm tính tổng bình phương của 1 số
int sumSquare(int n)
{
   int sum=0,temp;
   while(n!=0)
   {
      temp= n%10;
      sum+= temp*temp;
      n/=10;
   }
   return sum;
}
int main()
{
    int count=1; //đã tính 89
    int n=1;
    while(n<=10000000)
    {
       int i=n;
       while(i!=1 && i!=89)//xoay số đến khi gặp 1 or 89 thì dừng
       {
          i=sumSquare(i);
          if(i==89) count++;
       }
       n++;
    }
    printf("%d",count);
    return 0;
}
