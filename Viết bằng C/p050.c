#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0; //khong la so ngto
   return 1;//la so ngto
}
int main()
{
    int prime[80000]={0};
    int sum=0;
    int count=0;//biến đếm số nguyên tố dưới 1000000
    for(int n=2;n<1000000;n++)
    {
       if(isPrime(n))
       {
          if(sum+n > 1000000) break;
          prime[count]=n;
          count++;
          sum+=n;//sum là tổng của dãy số nguyên tố dài nhất dưới 1000000
       }
    }
    //cắt từ bên trái mảng
    int s1= sum,count1=count;
    for(int i=0;i<count;i++)
    {
       if(isPrime(s1)) break;
       else{
            s1= s1-prime[i];
            count1--;
       }
    }
    //cắt từ bên phải mảng
    int s2= sum,count2=count;
    for(int j=count-1;j>=0;j--)
    {
       if(isPrime(s2)) break;
       else{
            s2= s2-prime[j];
            count2--;
       }
    }
    if(count1>count2) printf("%d %d",s1,count1);
    else printf("%d %d",s2,count2);
    return 0;
}
