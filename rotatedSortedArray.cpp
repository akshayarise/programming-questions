#include <bits/stdc++.h>
#define size_of(type) (*(&type + 1) - type)
using namespace std;

int findingPivot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return i;
        }
    }
}

int binary_search(int arr[], int start, int end, int item)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == item)
        {
            return mid;
        }
        else if (arr[mid] < item)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {18, 20, 10, 12, 16}, item = 16, n = size_of(arr);

    int pivot = findingPivot(arr, n);
    int start = 0, end = n - 1;
    int index;
    if (arr[0] <= item)
    {
        index = binary_search(arr, start, pivot, item);
    }
    else
    {
        index = binary_search(arr, pivot + 1, end, item);
    }

    if (index == -1)
    {
        cout << "Element is not present in the array"
             << "\n";
    }
    else
    {
        cout << "index of the Element is  " << index << "\n";
    }

    return 0;
}