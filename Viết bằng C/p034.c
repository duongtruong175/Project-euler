#include <stdio.h>
#include <stdlib.h>

int checkCuriousNumber(int n); //khai báo hàm kiểm tra số tò mò

int main()
{
    //lưu giá trị của 0! đến 9! vào mảng
    int arr[10]={1,1,2,6,24,120,720,5040,40320,362880};
    int sum=0;

    //định nghĩa hàm kiểm tra số tò mò
    int checkCuriousNumber(int n)
    {
       int sum=0;
       int temp=n;
       while(n!=0)
       {
          sum+= arr[n%10];
          n= n/10;
       }
       if(sum==temp) return 1;
       else return 0;
    }
    int a=7*arr[9]; //số tối đa còn có thể thỏa mãn là số tò mò
    for(int i=3;i<a;i++)
    {
       if(checkCuriousNumber(i)==1)
         sum+=i;
    }
    printf("%d", sum);
    return 0;
}
