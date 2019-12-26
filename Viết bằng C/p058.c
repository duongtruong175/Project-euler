#include <stdio.h>
#include <math.h>
//hàm kiểm tra số nguyên tố
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
int main()
{
    //bắt đầu với xoắn ốc cỡ 7x7
    int prime=8;//số lượng số nguyên tố trên 2 đường chéo
    int num=13;//số phần tử trên 2 đường chéo
    int n=7; //kích cỡ ma trận xoắn ốc
    while(1)
    {
       n+=2;
       num+=4;
       if(isPrime(n*n)) prime++;
       if(isPrime(n*n-n+1)) prime++;
       if(isPrime(n*n-2*n+2)) prime++;
       if(isPrime(n*n-3*n+3)) prime++;
       double temp= ((double)prime/num)*100;//biến tỉ lệ
       if(temp<10) break;
    }
    printf("%d",n);
    return 0;
}
