#include <iostream>
using namespace std;
void mergeAndPrintReverse(int arr1[], int arr2[], int n1, int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
int start = 0, end = k - 1;
    while (start < end) {
        swap(mergedArr[start], mergedArr[end]);
        start++;
        end--;
    }
    cout << "Merged and reversed array: ";
    for (int i = 0; i < k; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[n1 + n2];

    mergeAndPrintReverse(arr1, arr2, n1, n2, mergedArr);

    return 0;
}
