#include <bits/stdc++.h>

using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    return recursiveBubbleSort(arr, n - 1);
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
    int arr[] = {23, 45, 67, 89, 100, 2, 34, 90}, n = sizeof(arr) / sizeof(arr[0]);

    recursiveBubbleSort(arr, n);

    printArray(arr, n);

    return 0;
}