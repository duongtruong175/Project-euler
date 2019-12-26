#include <stdio.h>
#include <stdlib.h>
int main()
{
      //zero one two three four five six seven eight nine
      int a[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
      // ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
      int b[] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
      // twenty thirty forty fifty sixty seventy eighty ninety
      int c[] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };

      int hundred = 7;
      int and = 3;
      int sum= 0,i,j;
      //từ 1 đến 9
      for(i=1;i<10;i++)
         sum+= a[i];
      //từ 10 đến 19
      for(i=0;i<10;i++)
         sum+= b[i];
      //từ 20 đến 99
      for(i=20;i<100;i++)
         sum+= c[i/10] + a[i%10];

      //từ 100 đến 999
      for(i=1;i<10;i++)
      {
         //số tròn trăm
         sum+= a[i] + hundred;

         //số trăm lẻ từ 1 đến 9
         for(j=1;j<10;j++)
            sum+= a[i] + hundred + and + a[j];

         //số trăm lẻ từ 10 đến 19
         for(j=0;j<10;j++)
            sum+= a[i] + hundred + and + b[j];

         //số trăm lẻ từ 20 đến 99
         for(j=20;j<100;j++)
            sum+= a[i] + hundred + and + c[j/10] + a[j%10];
      }
      //1000
      sum+= 11;

      printf("%d", sum);
      return 0;
}
