#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "arr"
         << " " << arr << "\n";
    cout << "&arr"
         << " " << &arr << "\n";

    cout << "(&arr + 1)"
         << " " << (&arr + 1) << "\n";

    cout << "*(&arr + 1)"
         << " " << *(&arr + 1) << "\n";

    int size = *(&arr + 1) - arr;
    cout << "size of the array: " << size << "\n";
    return 0;
}