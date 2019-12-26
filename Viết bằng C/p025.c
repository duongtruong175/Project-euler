#include <stdio.h>
#include <stdlib.h>
/* a1,a2,a3,a4,...,an
      dùng Fibonacci không đệ quy
      a=a1+a2;
      a1=a2;
      a2=a;
*/
int main()
{
    int a[1001]={0},b[1001]={0},c[1001]={0};
    a[0]=b[0]= 1; //F1=1 , F2=1
    int n=3; //biến đếm số thứ tự Fn
    int temp= 0; //biến nhớ khi cộng
    while(c[999]==0) //Fn đủ 1000 chữ số thì dừng
    {
       for(int i=0;i<1001;i++)
       {
          c[i]=(a[i]+b[i]+temp)%10;
          temp=(a[i]+b[i]+temp)/10;
       }
       for(int j=0;j<1001;j++)
       {
          a[j]=b[j];
          b[j]=c[j];
       }
       n++;
    }
    printf("%d",n-1);
    return 0;
}
