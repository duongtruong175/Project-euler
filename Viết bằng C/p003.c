#include <stdio.h>
#include <stdlib.h>
int main()
{

       long long n=600851475143;
       int maxprime=0;
       int oddprime=3;
       while(n%2==0)
       {
            maxprime=2;
            n/=2;
       }
       while(n!=1)
       {
           while(n%oddprime==0)
           {
               maxprime=oddprime;
               n=n/oddprime;
           }
           oddprime=oddprime+2;
       }
       printf("so can tim la %d",maxprime);
}
