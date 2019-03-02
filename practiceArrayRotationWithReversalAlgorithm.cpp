#include <bits/stdc++.h>
using namespace std;

void leftRotation(int arr[], int n, int d)
{
    int i = 0, j = d - 1;
    while (i < j)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i = d, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i = 0, j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, d = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotation(arr, n, d);
    printArray(arr, n);
    return 0;
}
