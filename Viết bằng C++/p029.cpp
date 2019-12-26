#include <iostream>
#include <cmath>
#include <set>
/*std::set là kiểu dữ liệu cho phép lưu trữ nhiều giá trị khác nhau
 gọi là phần tử, các phần tử trong cùng một std::set()
 có cùng một kiểu dữ liệu và là duy nhất.
*/
using namespace std;
int main()
{
   set<double> setofpower;
   for(double a=2;a<=100;a++)
   {
      for(double b=2;b<=100;b++)
         setofpower.insert(pow(a,b));
   }
	cout << setofpower.size();
   return 0;
}
