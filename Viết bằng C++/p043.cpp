#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   long long int result=0;
   int a[10]={1,0,2,3,4,5,6,7,8,9}; //hoán vị thứ 1
   int count= 1; //biến đếm số thứ tự của hoán vị
   while(count <= 3265920)//chỉ tồn tại 10!-9! số 0-9 bắt đầu khác 0
   {
      int t1= (a[1]*100+a[2]*10+a[3])%2==0?1:0;
      int t2= (a[2]*100+a[3]*10+a[4])%3==0?1:0;
      int t3= (a[3]*100+a[4]*10+a[5])%5==0?1:0;
      int t4= (a[4]*100+a[5]*10+a[6])%7==0?1:0;
      int t5= (a[5]*100+a[6]*10+a[7])%11==0?1:0;
      int t6= (a[6]*100+a[7]*10+a[8])%13==0?1:0;
      int t7= (a[7]*100+a[8]*10+a[9])%17==0?1:0;
      if(t1 && t2 && t3 && t4 && t5 && t6 && t7)
      {
         long long int num=0;
         for(int i=0;i<10;i++)//chuyển phần tử mảng thành số
            num= 10*num+a[i];
         result+= num; //cộng số thỏa mãn đề vào kết quả
      }
      next_permutation(a,a+10);// hoán vị tiếp theo của phần tử mảng a
      count++;
   }
   cout << result <<endl;
   return 0;
}
