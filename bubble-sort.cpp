#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[] = {100, 23, 20, 14, 17, 8, 45, 99}, n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printArray(arr, n);
    return 0;
}