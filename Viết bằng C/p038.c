#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//hàm kiểm tra 1 số có được viết dưới dạng 1 đến 9 số
int isPandigital(int n)
{
   if(n<123456789 || n>987654321) return 0;
   int arr[10]={0}; //mảng tránh lặp số
   int temp,count=0;
   while(n!=0) //lưu lại các chữ số của n vào mảng
   {
      temp= n%10;
      arr[temp]= 1;
      n=n/10;
   }
   for(int i=1;i<10;i++)
   {
      if(arr[i]==1)
         count++;
   }
   if(count==9) return 1;
   else return 0;
}
/*//hàm nối 2 số
int noiSo(int a,int b)
{
   int c=b;
   while(c!=0)
   {
      a=a*10;
      c=c/10;
   }
   return a+b;
}*/
int main()
{
    int n,max=918273645;
    for(int i=9000;i<=9999;i++)
    {
       n= i*100000 + i*2;
       if(isPandigital(n) && n>max)
         max=n;
    }
    printf("%d",max);
    return 0;
}
