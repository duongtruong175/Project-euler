#include <stdio.h>
#include <math.h>
//hàm đếm số chữ số
int demSo(int n)
{
   int count=0;
   while(n!=0)
   {
      n/=10;
      count++;
   }
   return count;
}
//hàm trả về giá trị của vị trí thứ n
int pos(int n)
{
   int count=0;//biến đếm độ dài dãy số
   int i=0; //là số được ghi vào dần dần vào dãy số
   while (count<n)
   {
      i++;
      count+=demSo(i);
   }
   /*sau while nhận được số i : nếu viết tiếp số này vào dãy số
   thì độ dài dãy số sẽ vượt quá vị trí cần tìm*/
   int temp=count-n; //độ chênh lệch số vị trí
   int rs= i/(int)pow(10,temp); //cắt bớt dãy để đủ n chữ số
   rs = rs%10; //lấy ra giá trị vị trí cần tìm
   return rs;
}
int main()
{
   int i=pos(1)*pos(10)*pos(100)*pos(1000)*pos(10000)*pos(100000)*pos(1000000);
   printf("%d ",i);
   return 0;
}
