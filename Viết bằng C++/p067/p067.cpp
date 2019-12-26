#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    //nhập dữ liệu vào mảng
    int n=0;// là hàng , cột
    int arr[100][100]={0};
    ifstream fp("triangle.txt");
    while(!fp.eof())
    {
       for(int i=0;i<=n;i++)
         fp >> arr[n][i];
       n++;//hàng,cột sau tăng 1 so với hàng,cột trước
    }
    fp.close();
    //duyệt từ dưới lên ,cộng dồn số lớn lên hàng trên
    for(int i=98;i>=0;i--)
    {
       for(int j=0;j<99;j++)
       {
         arr[i][j]= arr[i][j]+ max(arr[i+1][j],arr[i+1][j+1]);
       }
    }
    cout << arr[0][0];
    return 0;
}
