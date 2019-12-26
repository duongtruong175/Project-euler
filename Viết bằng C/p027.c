#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktSoNguyenTo(int n)
{
   if(n<1) return 0;
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0; //không phải số nguyên tố
   return 1; // là số nguyên tố
}
int main()
{
    int max=0,temp; //biến lưu lại tích a*b
    for(int a=-999;a<1000;a++)
    {
       for(int b=-1000;b<=1000;b++)
       {
          int c=2; //điều kiện vào vòng while
          int n=0; //biến đếm số ước bắt đầu từ 0
          while(ktSoNguyenTo(c)==1)
          {
             c= n*n+a*n+b;
             n++;
          }
          if(n > max)
          {
             max= n;
             temp= a*b;
          }
       }
    }

    printf("%d",temp);
    return 0;
}
