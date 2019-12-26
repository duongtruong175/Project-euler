#include <stdio.h>
#include <stdlib.h>
int ktra_prime(int n){
    for(int i=1;i<21;i++)
       if(n%i!=0)return 0;
    return 1;
}
int main()
{     int n=1;
      while(n>0)
      {
          if(ktra_prime(n)==1) break;
          n=n+1;
      }
      printf("so can tim la %d",n);
      return 0;
}
