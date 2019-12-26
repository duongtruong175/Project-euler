#include <stdio.h>
#include <stdlib.h>

int main()
{   int s=0;
    for(int i=0;i<1000;i++)
      {
      if(i%3==0||i%5==0) s=s+i;
      }
    printf("tong tat ca cac boi so cua 3 va 5 duoi 1000 la %d",s);
    return 0;
}
