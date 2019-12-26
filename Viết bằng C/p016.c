#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sum=0, dem;
    int arr[500] ={0}; //khởi tạo 1 mảng để có thể chứa đủ các chữ số của 2^1000
    arr[498]=2; //ban đầu mảng khi in là 00xx0020
    arr[499]=0;


    for(int a=1; a<1000; a++) //lặp 999 lần để tính ra 2^1000
         for (int i=0; i<499 ; i++)
         {
            if (arr[i+1]>4)
                arr[i]= ( (2*arr[i]) %10) +1;
            else
                arr[i]= (2*arr[i]) %10;
         }

    for (int j=0; j<499; j++) // cộng toàn bộ các số chứa trong mảng
    {
         sum= sum+arr[j];
    }
    printf("\nso can tim la %d", sum);

    return 0;
}
