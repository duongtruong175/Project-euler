#include <stdio.h>
#include <stdlib.h>
int sumFifthPowers(int n)
{
   int a,sum=0;
   int temp=n;
   while(n!=0)
   {
      a= n%10;
      sum+= a*a*a*a*a;
      n=n/10;
   }
   if(sum==temp) return 1;
   else return 0;
}
int main()
{
    int sum=0;
    int a= 7*9*9*9*9*9;
   // a=7*9^5=413343 không đủ 7 chữ số ,nên đây là giới hạn số thỏa mãn đề bài
    for(int i=2;i<a;i++)
    {
       if(sumFifthPowers(i)==1)
          sum+= i;
    }
    printf("%d", sum);
    return 0;
}
