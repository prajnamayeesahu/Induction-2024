#include <iostream>
using namespace std;

int mostFrequent(int *arr, int n) {
    int maxCount = 0; 
    int elementHavingMaxFreq; 

    for (int i = 0; i < n; i++) {
        int count = 0; 

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++; 
        }

        if (count > maxCount) {
            maxCount = count;
            elementHavingMaxFreq = arr[i];
        }
    }

    return elementHavingMaxFreq;
}

int main() {
    int arr[] = {40, 50, 30, 40, 50, 30, 30}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Most frequent element: " << mostFrequent(arr, n) << endl;

    return 0;
}
