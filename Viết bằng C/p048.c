#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int result=0;
    long long int modulo = 10000000000;
    for(int i=1;i<=1000;i++)
    {
       long long int temp=i;
       for(int j=1;j<i;j++)//tạo ra i^i
       {
          temp*= i;
          temp%= modulo;//lấy 10 chữ số cuối
       }
       result+= temp;
       result%=modulo;
    }
    printf("%lld",result);
    return 0;
}
