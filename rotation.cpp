#include<iostream>
using namespace std;

reverse(int arr[], int start, int end){
	while(start < end){
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
        arr[end] = temp;
		start++;
		end--;	
	}
}

int main(){
	
	int n, d=2;
	cout<<"Enter the number of elements in the array";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
