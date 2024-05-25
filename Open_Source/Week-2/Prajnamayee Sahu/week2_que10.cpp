#include <iostream>
using namespace std;

int main()
{
    string str;
    int alphabetCount = 0, digitCount = 0, specialCharCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
        {
            alphabetCount++;
        }
        else if ('0' <= ch && ch <= '9')
        {
            digitCount++;
        }
        else
        {
            specialCharCount++;
        }
    }

    cout << "Total number of alphabets: " << alphabetCount << endl;
    cout << "Total number of digits: " << digitCount << endl;
    cout << "Total number of special characters: " << specialCharCount << endl;

    return 0;
}
