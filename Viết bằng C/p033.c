#include <stdio.h>
#include <stdlib.h>
//hàm so sánh phân số ban đầu vs phân số rút gọn
int check(int a, int b)
{
   if(a==b) return 0;
   if(a%10==0||b%10==0) return 0;
   double i= (double)a/b;
   double j;
   int temp1=a/10, temp2=a%10;
   int temp3=b/10, temp4=b%10;
   if(temp1==temp3)
   {
      j=(double)temp2/temp4;
      if(i==j) return 1;
   }
   if(temp1==temp4)
   {
      j=(double)temp2/temp3;
      if(i==j) return 1;
   }
   if(temp2==temp3)
   {
      j=(double)temp1/temp4;
      if(i==j) return 1;
   }
   if(temp2==temp4)
   {
      j=(double)temp1/temp3;
      if(i==j) return 1;
   }
   return 0;
}
//hàm tìm ước chung lớn nhất
int UCLN(int a,int b)
{
   if(b==0) return a;
   else return UCLN(b,a%b);
}
int main()
{
    int ts=1,ms=1;
    for(int i=10;i<100;i++)
       for(int j=i+1;j<100;j++)
          if(check(i,j)==1)
          {
            ts*=i;
            ms*=j;
          }
    int a=UCLN(ts,ms);
    printf("%d",ms/a);
    return 0;
}
