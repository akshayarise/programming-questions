#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1, k = i;

        while (j >= 0)
        {

            if (arr[j] > arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
            k--;
            j--;
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

    int arr[] = {23, 453, 17, 19, 45, 89, 83}, n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printArray(arr, n);

    return 0;
}