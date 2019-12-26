#include <stdio.h>
#include <stdlib.h>
//hàm kiểm tra số palindromic với cơ số b
int checkPalindromic(int n,int b)
{
   int a=n, m=0;
   while(a!=0)
   {
      m= b*m + a%b;
      a= a/b;
   }
   if(m==n) return 1;
   return 0;
}
int main()
{
    int sum=0;
    for(int i=1;i<1000000;i+=2)
    {
       if(checkPalindromic(i,10) && checkPalindromic(i,2))
         sum+=i;
    }
    printf("%d",sum);
    return 0;
}
