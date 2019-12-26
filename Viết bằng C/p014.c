#include <stdio.h>
#include <stdlib.h>
//hàm đếm số lượng phần tử được tạo ra trong chuỗi khi bắt đầu với số n
int hamDem(long long int n){
     int dem=0;
     while(n>1)
     {
          if(n%2==1)
            {
               n=3*n+1;
               dem++;
            }
          if(n%2==0)
            {
               n=n/2;
               dem++;
            }
     }
     dem++; //sau vòng while thì n=1 nên ta phải tăng thêm 1 vào đếm
     return dem;
}
int main()
{
     long long int max=0,i,j;
     //quét các số bắt đầu dưới 1000000 để tìm chuỗi dài nhất
     for(i=1;i<1000000;i++)
          if(hamDem(i)> max)
          {
              max= hamDem(i);
              j=i;
          }
    return j;
}
