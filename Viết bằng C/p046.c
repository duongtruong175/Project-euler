#include <stdio.h>
#include <stdlib.h>
//hàm kiểm tra số nguyên tố
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
int main()
{
    int arr[1000];
    for(int i=0;i<1000;i++)//ghi giá trị của 2 lần 1 hình vuông vào mảng
      arr[i]= 2*i*i;
    int temp=1;
    int result=3;//biến số lẻ cần tìm
    while(temp==1)
    {
       result+= 2;
       temp=0;//gán false: nếu sau vòng while dưới mà ko tìm đc số ngto thỏa mãn thì ta nhận được số lẻ cần tìm
       int j=0;
       while( result >= arr[j] )//tìm số nguyên tố thỏa mãn đề bài
       {
          if( isPrime(result-arr[j])==1 )
          {
             temp=1;
             break;
          }
          j++;
       }
    }
    printf("%d",result);
    return 0;
}
