#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum=0,temp=0,temp1=0,temp2=0,x,y;
    int a[300]={0}; //mảng để lưu các con số của kết quả
    a[299] = 1;

    for(int n=2;n<=100;n++)
    {
       x=n%10; //lấy ra số hàng đơn vị
       y=n/10; //lấy ra số hàng chục
       int b[300]={0};
       int c[300]={0};c[299]=0;

       for(int i=299;i>=0;i--) //nhân mảng với số hàng đơn vị
       {
          b[i]= a[i]*x+temp1;
          temp1= b[i]/10;
          b[i]=b[i]%10;
       }
       for(int j=298;j>=0;j--) //nhân mảng với số hàng chục
       {
          c[j]=a[j+1]*y+temp2;
          temp2= c[j]/10;
          c[j]=c[j]%10;
       }
       for(int k=299;k>=0;k--) //cộng 2 mảng để ra kết quả phép nhân giữa 2 số
          {
             a[k]=b[k]+c[k]+temp;
             temp= a[k]/10;
             a[k]=a[k]%10;
          }
    }

    //tính tổng các chữ số trong mảng kết quả
    for(int i=0;i<300;i++)
        sum= sum+a[i];

    printf("%d",sum);
    return 0;
}
