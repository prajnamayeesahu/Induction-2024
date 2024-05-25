#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Array 1: ";
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;
int arr2[n];

    copy(arr1, arr1 + n, arr2);

    cout << "Array 2: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
