#include <stdio.h>
#include <stdlib.h>
/*Một số palindromic đọc giống nhau cả hai cách.
 Bảng màu lớn nhất được làm từ sản phẩm của hai số có 2 chữ số là 9009 = 91 × 99.
 Tìm bảng màu lớn nhất được tạo từ tích của hai số có 3 chữ số*/
int Palindromic_number(int n){
    int a,m=0,b=n;
    while (b!=0){
       a=b%10;
       m=m*10+a;
       b=b/10;
       }
    if(m==n)return 1;
    else return 0;

}
int main()
{   int c,max=0;
    for(int i=100;i<1000;i++)
        for(int j=100;j<1000;j++){
        c=i*j;
        if((Palindromic_number(c)==1)&&(c>max)) max=c;
    }
    printf("so cam tim la %d",max);
}
