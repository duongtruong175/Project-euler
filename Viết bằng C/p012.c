#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int s,dem,n=1;
    while(1)
    {
         dem=0;
         s=(n*(n+1))/2; // tính triangle number thứ n
         // đếm số ước của triangle number
         for(int i=1;i<=sqrt(s);i++)
         {
              if(s%i==0) dem=dem+2;
              if(i*i==s) dem=dem-1; //nếu là số chính phương thì giảm đếm đi 1
         }
         if(dem>500)
         {
            printf("so can tim la %d",s);
            break;
         }
         n++;
    }
    return 0;
}
