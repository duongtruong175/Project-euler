#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

//hàm tính điểm theo vị trí
int tinhDiem(string s,int i){
      int temp=0;
      for(int j=0;j<s.length();j++)
         temp+=s[j]-'A'+1; //giá trị của kí tự theo mã ASCII
      return temp*i ;
}
int main()
{
   //nhập dữ liệu file vào 1 mảng
   string arr[6000];
   ifstream fin("names.txt");
   int size=0; //biến số lượng tên trong file
   while(!fin.eof()){
      fin >> arr[size++];
   }
   fin.close();

   //hàm có sẵn sắp xếp theo thứ tự
   sort(arr,arr+size);

   //tính tổng cần tìm
   long long int sum=0;
   for(int i=1;i<size;i++)
      sum+= tinhDiem(arr[i],i);

   cout<<sum;
   return 0;
}
