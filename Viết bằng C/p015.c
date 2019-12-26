#include <stdio.h>
#include <stdlib.h>

int main()
{
     long long int arr[21][21];
     for(int i=0;i<21;i++)
          for(int j=0;j<21;j++)
          {
               if(i==0||j==0)
                    arr[i][j]= 1;
               else arr[i][j]= arr[i-1][j] + arr[i][j-1];
          }
     printf("%lld",arr[20][20]);
     /*long long int rs = 1;
     for(long long int i = 1;i<=20;i++){
          rs = rs * (i+20)/ i;

     }
     printf("%lld",rs);*/
     return 0;
}
