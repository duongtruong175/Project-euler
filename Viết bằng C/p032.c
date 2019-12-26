#include <stdio.h>
#include <stdlib.h>
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
    int a[10000]={0}; //mảng để tránh lặp số
    int sum=0;
    int p;
    for(int i=1;i<=9;i++) //trường hợp x nhân xxxx = xxxx
    {
      for(int j=1234;j<10000/i;j++)
      {
         p= 100000*i*j + 10*j + i;
         if(isPandigital(p))
            a[i*j]=1;
      }
    }
    for(int i=12;i<=98;i++) //trường hợp xx nhân xxx = xxxx
    {
      for(int j=123;j<10000/i;j++)
      {
         p= 100000*i*j + 100*j + i;
         if(isPandigital(p))
            a[i*j]=1;
      }
    }
    for(int k=1000;k<10000;k++) //tổng các số thỏa mãn
    {
       if(a[k]==1)
         sum+= k;
    }
    printf("%d",sum);
    return 0;
}
