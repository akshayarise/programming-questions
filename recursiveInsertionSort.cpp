#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
  if (n <= 1)
  {
    return;
  }

  insertionSort(arr, n - 1);

  int key = arr[n - 1], j = n - 2;

  while (j >= 0 && arr[j] > key)
  {
    arr[j + 1] = arr[j];
    j = j - 1;
  }
  arr[j + 1] = key;
}

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main()
{
  int arr[] = {23, 45, 12, 56, 7, 8}, n = sizeof(arr) / sizeof(arr[0]);
  // Before Insertion Sort
  cout << "Before Insertion Sort"
       << "\n";
  print(arr, n);

  insertionSort(arr, n);

  // After Insertion Sort
  cout << "After Insertion Sort"
       << "\n";
  print(arr, n);
  return 0;
}