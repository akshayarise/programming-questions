// binary search in the sorted array.

#include<stdio.h>
int main(){
    int arr[10] = {12,45,67,77,88,99,100,120,140,200};
    int num = 56;
    int lower = 0,upper = sizeof(arr)/sizeof(arr[0]) - 1;
    int mid;
    int flag  = 0;
    
    while(lower<=upper){
     mid = (lower+upper)/2;
     if(arr[mid] == num){
     	printf("The index of the searching element is%d",mid);
        flag = 1;
        break;
     }
     if(arr[mid] < num){
       lower = mid + 1;
     }
     if(arr[mid] > num){
     	upper = mid - 1;
     }
    } 
    if(!flag){
    	printf("The element is not present in the array");
    }
	return 0;
}