#include <bits/stdc++.h>
#define size_of(type) (*(&type + 1) - type)
using namespace std;

int binary_search(int arr[], int first, int last, int item)
{
    int mid = (first + last) / 2;
    if (arr[mid] == item)
    {
        return mid;
    }
    else if (item < arr[mid])
    {
        binary_search(arr, first, mid - 1, item);
    }
    else
    {
        binary_search(arr, mid + 1, last, item);
    }
}

int main()
{
    int arr[] = {10, 13, 15, 45, 56, 67, 90}, n = size_of(arr), item = 15;
    int first = 0, last = n - 1;
    int index = binary_search(arr, first, last, item);

    cout << "index" << index
         << "\n";
    return 0;
}