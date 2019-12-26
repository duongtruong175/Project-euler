#include <stdio.h>
#include <math.h>
//hàm kiểm tra số nguyên tố
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
//hàm kiểm tra 2 số có phải hoán vị?
int isPermutation(int m,int n)
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
    int prime[2000];
    int n=1001,a=0;
    while(n<10000)//nhập các số nguyên tố 4 chữ số vào mảng
    {
       if(isPrime(n))
       {
          prime[a]= n;
          a++; //số lượng số nguyên tố 4 chữ số
       }
       n+=2;
    }
    for(int i=0;i<a;i++)//duyệt các số nguyên tố trong mảng
    {
       for(int j=i+1;j<a;j++)
       {
          if( isPermutation(prime[i],prime[j]) )
          {
             int diff= prime[j]-prime[i];//bước nhảy 2 số đầu
             int temp= prime[j]+diff; //tính số thứ 3 rồi kiểm tra
             if(temp<10000 && isPrime(temp) && isPermutation(temp,prime[i]))
               printf("%d%d%d\n",prime[i],prime[j],temp);
          }
       }
    }
    return 0;
}
