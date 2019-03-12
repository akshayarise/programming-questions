#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int item, int low, int high)
{
    int mid = (low + high) / 2;

    if (low >= high)
    {
        return (item > arr[low]) ? (low + 1) : low;
    }

    else if (item > arr[mid])
    {
        return binarySearch(arr, item, mid + 1, high);
    }

    else
    {
        return binarySearch(arr, item, low, mid - 1);
    }
}

void insertionBinarySort(int arr[], int n)
{
    int i, loc, j, selected, low, high;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        selected = arr[i], low = 0, high = j;
        loc = binarySearch(arr, selected, low, high);

        while (j >= loc)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = selected;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {34, 56, 100, 12, 10, 8, 45}, n = sizeof(arr) / sizeof(arr[0]);
    insertionBinarySort(arr, n);

    printArray(arr, n);
    return 0;
}
