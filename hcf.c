// finding hcf of two numbers with iterative approach.
// divison method for finding hcf.

#include <stdio.h>


int main()
{
 int a=25,b=50;
 int rem = a % b;
 if(rem !=0){
     while(rem!=0){
         rem = a%b;
         if(rem==0){
             printf("%d",b);
             break;
         }
         a = b;
         b = rem;
     }
 }
 else{
     printf("%d",b);
 }
    return 0;
}
