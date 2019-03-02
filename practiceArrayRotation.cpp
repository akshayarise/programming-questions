#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int d)
{
    if (d == 0)
    {
        return n;
    }

    gcd(d, n % d);
}

void leftRotation(int arr[], int n, int d)
{
    for (int i = 0; i < gcd(n, d); i++)
    {
        int j = i;
        int temp = arr[i];

        while (1)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, d = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotation(arr, n, d);
    printArray(arr, n);
    return 0;
}