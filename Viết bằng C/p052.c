#include <stdio.h>
#include <stdlib.h>
//hàm kiểm tra 2 số giống nhau ?
int sameDigits(int m,int n)
{
   int arr[10]={0};
   while(m!=0)
   {
      arr[m%10]++;
      m=m/10;
   }
   while(n!=0)
   {
      arr[n%10]--;
      n=n/10;
   }
   for(int i=0;i<10;i++)
      if(arr[i]!=0) return 0;
   return 1;
}
int main()
{
    int n=1;
    while(1)
    {
       if(sameDigits(n,2*n)&&sameDigits(n,3*n)&&sameDigits(n,4*n)&&sameDigits(n,5*n)&&sameDigits(n,6*n))
       {
          printf("%d",n);
          break;//số đầu tiên thỏa mãn thì break
       }
       n++;
    }
    return 0;
}
