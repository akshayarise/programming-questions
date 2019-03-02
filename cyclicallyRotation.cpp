#include <bits/stdc++.h>
#define size_of(type) *(&type + 1) - type

using namespace std;

void clockwiseRotation(int arr[], int n)
{
    int i = n, temp = arr[n - 1];
    for (i; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = temp;
}

void printArray(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int n = size_of(arr);
    clockwiseRotation(arr, n);
    printArray(arr, n);
    return 0;
}