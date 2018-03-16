// finding hcf of two numbers with iterative approach.
// divison method for finding hcf.

#include <iostream>
using namespace std;

int main()
{
 int a=25,b=0;
 int rem = a % b;
 if(rem !=0){
     while(rem!=0){
         rem = a%b;
         if(rem==0){
             cout<<b;
             break;
         }
         a = b;
         b = rem;
     }
 }
 else{
     cout<<b;
 }
    return 0;
}
