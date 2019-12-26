#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max=0,temp;
    for(int d=2;d<1000;d++)
    {
       int count= 0; //biến đếm số chữ số của chu kì
       int ts=1; //tử số
       int a[1000]={0};
       for(int i=1;i<d;i++)
       {
          ts= ts*10;
          ts= ts%d;
          if(a[ts]==1 && ts==1) //nếu tử số lặp lại thì break
             break;
          a[ts]=1; //lưu chỉ số của tử số
       }
       if(a[0]==1) //nếu là số hữu tỉ
         count=0;
       else
         for(int j=1;j<d;j++)
            if(a[j]==1) count++;
       //tìm chu kì dài nhất
       if(count > max)
       {
          max= count;
          temp= d;
       }
    }
    printf("%d",temp);
    return 0;
}
