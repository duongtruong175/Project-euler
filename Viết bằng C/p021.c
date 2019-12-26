#include <stdio.h>
#include <stdlib.h>
//hàm tính tổng các ước của 1 số bất kì
int tinhTongUoc(int n)
{
     int sum=0;
     for(int i=1;i<n;i++)
          if(n%i==0) sum+= i;
     return sum;
}
int main()
{
     int sum=0,b,c;
     //kiểm tra 1 số dưới 10000 có phải amicable number
     for(int a=1;a<10000;a++)
     {
          b=tinhTongUoc(a);
          c=tinhTongUoc(b);
          if(c==a && a!=b) //nếu là amicable number thì cộng vào sum
               sum+= a;
     }
     printf("%d",sum);
}
