#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void selectionSortOnArrayOfStrings(char arr[][MAX], int n)
{
  char minStr[MAX];
  for (int i = 0; i < n - 1; i++)
  {
    int minIdx = i;
    strcpy(minStr, arr[i]);
    for (int j = i + 1; j < n; j++)
    {
      if (strcmp(minStr, arr[j]) > 0)
      {
        strcpy(minStr, arr[j]);
        minIdx = j;
      }
    }

    if (minIdx != i)
    {
      char temp[MAX];
      strcpy(temp, arr[i]);

      strcpy(arr[i], minStr);

      strcpy(arr[minIdx], temp);
    }
  }
}

void printArray(char arr[][MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  char arr[][MAX] = {"Geeks", "Practice.GeeksforGeeks", "GeeksQuiz"};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSortOnArrayOfStrings(arr, n);
  printArray(arr, n);
  return 0;
}