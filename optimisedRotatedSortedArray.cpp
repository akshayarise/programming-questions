#include <bits/stdc++.h>
#define size_of(type) (*(&type + 1) - type)

using namespace std;

int search(int arr[], int l, int h, int item)
{
    if (l > h)
    {
        return -1;
    }

    int mid = (l + h) / 2;
    if (arr[mid] == item)
    {
        return mid;
    }
    else if (arr[l] <= arr[mid])
    {

        if (item >= arr[l] && item <= arr[mid])
        {
            return search(arr, l, mid - 1, item);
        }
        return search(arr, mid + 1, h, item);
    }
    else
    {
        if (item >= arr[mid] && item <= arr[h])
        {
            return search(arr, mid + 1, h, item);
        }
    }
    return search(arr, l, mid - 1, item);
}

int main()
{
    int arr[] = {30, 40, 50, 60, 10, 20}, n = size_of(arr), item = 20;
    int l = 0, h = n - 1;
    int index = search(arr, l, h, item);
    if (index != -1)
    {
        cout << "index is     " << index << "\n";
    }
    else
    {
        cout << "Element is not present in the array"
             << "\n";
    }
    return 0;
}