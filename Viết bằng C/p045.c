#include <stdio.h>
#include <math.h>
//hàm kiểm tra số ngũ giác
int isPentagonal(unsigned int n)
{
   for(unsigned int i=165;i*i<n;i++)
   {
      unsigned int a= i*(3*i-1)/2;
      if(a==n) return 1;
   }
   return 0;
}
int main()
{
    unsigned int result;
    int i = 143;//chỉ số của số lục giác
    while(1)
    {
      i++;
      result= i*(2*i-1); //tính ra số lục giác
      if (isPentagonal(result)==1)
         break;
    }
    printf("%d",result);
    return 0;
}
