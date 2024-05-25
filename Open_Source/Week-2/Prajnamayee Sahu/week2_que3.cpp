#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {40, 50, 10, 45, 60, 70, 20, 30, 35, 55};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << "Array after sorting in ascending order: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
