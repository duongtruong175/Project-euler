#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int n){
    if(n==0||n==1) return n+1;
    else return Fibonacci(n-1)+Fibonacci(n-2);
    }
int main()
{
    int max=4000000;
    int sum=0;
    for(int i=0;;i++){
       int fn=Fibonacci(i);
       if(fn%2==0&&fn<max) sum=sum+fn;
       else if(fn>=max) break;
    }
    printf("tong cac so fibonacci chan la %d",sum);
    return 0;
}
