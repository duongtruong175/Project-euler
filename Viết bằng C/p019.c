#include <stdio.h>
#include <stdlib.h>
int namNhuan(int year)
{
   if(year%4==0||year%400==0&&year%100!=0)
      return 1;
   else return 0;
}
int main()
{
   int firstday= 3; //thứ của 1/1/1901
   int count= 0; //biến đếm số ngày cn đầu tháng
   for(int year=1901;year<=2000;year++)
   {
      if(namNhuan(year)==0) //năm thường
         switch(firstday)
         {
            case 2: count+= 2;break;
            case 3: count+= 2;break;
            case 4: count+= 1;break;
            case 5: count+= 3;break;
            case 6: count+= 1;break;
            case 7: count+= 1;break;
            case 8: count+= 2;break;
         }
      else
         switch(firstday) //năm nhuận
         {
            case 2: count+= 2;break;
            case 3: count+= 1;break;
            case 4: count+= 2;break;
            case 5: count+= 2;break;
            case 6: count+= 1;break;
            case 7: count+= 1;break;
            case 8: count+= 3;break;
         }

      if(namNhuan(year)==0) firstday+= 1; //năm thường thì tăng 2 thứ
      else firstday+= 2; //năm nhuận thì tăng 1 thứ
      if(firstday > 8) firstday= firstday-7;
   }
   printf("%d",count);
   return 0;
}
