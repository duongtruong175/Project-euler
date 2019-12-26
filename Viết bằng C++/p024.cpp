#include <iostream>
#include <algorithm>
using namespace std;
//hàm next_permutation trong thư viện algorithm
//trả về hoán vị tiếp theo có thự tự sắp xếp cao hơn so với hoán vị hiện tại
int main()
{
   int a[10]={0,1,2,3,4,5,6,7,8,9}; //hoán vị thứ 1
   int temp= 2; //biến đếm số thứ tự của hoán vị
   while(temp <= 1000000)
   {
      next_permutation(a,a+10); // hoán vị các phần tử của mảng a
      temp++;
   }
   for(int i=0;i<10;i++) //in ra kết quả
      cout<<a[i];
   return 0;
}
