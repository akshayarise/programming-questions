#include <bits/stdc++.h>
#define size_of(type) (*(&type + 1) - type)
using namespace std;

int binarySearchIterative(int arr[], int n, int item)
{
    int first = 0, last = n - 1;
    while (first < last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == item)
        {
            return mid;
        }
        else if (item < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
}

int main()
{
    int arr[] = {10, 12, 14, 16, 18, 34, 67, 78, 99, 104}, n = size_of(arr), item = 78;
    cout << "index=====" << binarySearchIterative(arr, n, item);
    return 0;
}