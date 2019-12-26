#include <stdio.h>
#include <stdlib.h>
/*cách khác: với mt n x n thì
 top bên phải = n^2
 top bên trái = n^2-(n-1)= n^2-n+1
 bottom bên trái = n^2-(n-1)-(n-1)=n^2-2n+2
 bottom bên phải = n^2-(n-1)-(n-1)-(n-1)= n^2-3n+3
 -------------------------------------------------
 tổng = 4n^2-6n+6
 */
int main()
{
   int sum=1;
   for(int i=3;i<=1001;i+=2)
      sum+= 4*i*i-6*i+6;
   printf("%d",sum);
   return 0;
}
