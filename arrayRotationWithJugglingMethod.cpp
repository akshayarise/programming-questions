#include<bits/stdc++.h>
using namespace std;

/* Function to get gcd of a and b */
int gcd(int a, int b){
  if(b==0)
   return a;
  else
   return gcd(b, a % b);
}

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n){

   for(int i=0;i<gcd(d,n);i++){
       /* move i-th values of blocks */
       int temp = arr[i];
       int j = i;
       while(1){
           int k = j + d;
           if(k >= n)
            k = k - n;
           if(k == i)
             break;

           arr[j] = arr[k];
           j = k;
       }
       arr[j] = temp;
   }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

/* Driver program */
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n  = sizeof(arr)/sizeof(arr[0]);

    // Function calling
    leftRotate(arr,3,n);
    printArray(arr,n);
    
    return 0;
}