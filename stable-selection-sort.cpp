#include <bits/stdc++.h>
#define size_of(type) (*(&type + 1) - type)

using namespace std;

void stable_selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        int key = arr[min];

        while (i < min)
        {
            arr[min] = arr[min - 1];
            min--;
        }
        arr[i] = key;
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
    int arr[] = {2, 4, 6, 8, 59}, n = size_of(arr);

    stable_selection_sort(arr, n);

    printArray(arr, n);
    return 0;
}