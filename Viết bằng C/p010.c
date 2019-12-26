#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktsonguyento(int n){
    for(int i=2;i<=sqrt(n);i++)
       if(n%i==0)return 0; //n không là số nguyên tố
    return 1; //n là số nguyên tố
    }
int main()
{   long long int sum=2;
    int i=3,a=2000000;
    for(i=3;i<a;i=i+2)
    {
        if(ktsonguyento(i)==1)
        {
              sum+=i;
        }
    }
    printf("so can tim la %lld",sum);
    return 0;
}
