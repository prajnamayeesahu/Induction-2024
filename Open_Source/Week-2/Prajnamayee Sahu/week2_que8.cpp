#include <iostream>
using namespace std;

int main() {
    char str[100]; 
    int vowelCount = 0, consonantCount = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100); 

    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; str[i]; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            vowelCount++; 
        } else if ((str[i] >= 'a' && str[i] <= 'z')) {
            consonantCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
