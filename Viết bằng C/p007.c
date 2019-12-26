#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktsonguyento(int n){
    if(n==1)return 0;
    for(int i=2;i<=sqrt(n);i++)
       if(n%i==0)return 0; // không là số nguyên tố
    return 1; // là số nguyên tố
    }
int main()
{
    int a[11000],j=2,i=1;
    while(i<10005)
    {
       if(ktsonguyento(j)==1)
           {
              a[i]=j;
              i++;
           }
       j++;
    }
      printf("%d",a[10001]);
    return 0;
}
