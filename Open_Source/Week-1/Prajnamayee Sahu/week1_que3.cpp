#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, remainder;

    do {
        cout << "Enter a number (0 to stop): ";
        cin >> number;
        
        while (number > 0) {
            remainder = number % 10; 
            sum += remainder; 
            number /= 10; 
        }
        cout << "Sum of digits: " << sum << endl;
        sum = 0;
    } while (number != 0);

    return 0;
}
