/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Array Rotation by d rotations.
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[i] = temp;
}
int main()
{
    int d = 3, n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < d; i++)
    {
        leftRotate(arr, n);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
