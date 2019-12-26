#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//hàm tính giá trị của từ
int getValue(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
       sum+= s[i]-'A'+1;
    return sum;
}
int main()
{
    //nhập dữ liệu file vào 1 mảng
    string arr[2000];
    ifstream fin("words.txt");
    int size=0; //biến số lượng tên trong file
    while(!fin.eof()){
       fin >> arr[size];
       size++;
    }
    fin.close();

    //mảng giá trị các từ tam giác
    int b[100];
    for(int i=0;i<100;i++)
       b[i]= i*(i+1)/2;

    int count=0;
    for(int j=0;j<size;j++)//duyệt toàn bộ từ
    {
       for(int k=0;k<100;k++) //kiểm tra có phải từ tam giác?
         if(getValue(arr[j])==b[k])
            count++;
    }
    cout << count << endl;
    return 0;
}
