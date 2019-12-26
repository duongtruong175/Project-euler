#include <stdio.h>
//hàm kiểm tra số có giống 1_2_3_4_5_6_7_8_9_0
int isForm(long long int n)
{
   long long int a= n*n;
   if(a%10!=0) return 0;
   a/=100;
   if(a%10!=9) return 0;
   a/=100;
   if(a%10!=8) return 0;
   a/=100;
   if(a%10!=7) return 0;
   a/=100;
   if(a%10!=6) return 0;
   a/=100;
   if(a%10!=5) return 0;
   a/=100;
   if(a%10!=4) return 0;
   a/=100;
   if(a%10!=3) return 0;
   a/=100;
   if(a%10!=2) return 0;
   a/=100;
   if(a%10!=1) return 0;
   return 1;
}
int main()
{
    long long int n= 1000000000;//n^2 đủ 19 chữ số
    while(1)
    {
       if(isForm(n))
       {
          printf("%lld",n);
          break;
       }
       n+=10; //vì cuối của kết quả là 0
    }
    return 0;
}
