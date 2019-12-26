#include <stdio.h>
#include <stdlib.h>
int ktSoDoiDao(int n)
{
   int sum= 0;
   for(int i=1;i<n;i++)
   {
      if(n%i== 0) sum+=i;
   }
   if(sum>n) return 1;//là số dồi dào
   else return 0;//không là số dồi dào
}
int ktTongDoiDao(int n)
{
   for(int i=12;i<=n/2;i++)
   {
      if(ktSoDoiDao(i)==1&&ktSoDoiDao(n-i)==1)
         return 1; //số là tổng của 2 số dồi dào
   }
   return 0;
}
int main()
{
    int sum= 0;
    for(int i=1;i<28123;i++)
      if(ktTongDoiDao(i)!=0)
         sum+= i;
    printf("%d",sum);
    return 0;
}
