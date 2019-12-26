#include <stdio.h>
#include <stdlib.h>
int ktra_Pythagorean_triplet(int a,int b,int c){
     if(a<b&&b<c&&a*a+b*b==c*c) return 1;
     else return 0;
}
int main()
{
   int x,y,z,t;
   for(x=1;x<500;x++)
   {
       for(y=1;y<500;y++)
        {
            z=1000-x-y;
            if(ktra_Pythagorean_triplet(x,y,z)==1)
               t=x*y*z;
        }
   }
   printf("so can tim la %d",t);
   return 0;

}
