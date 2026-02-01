#include <iostream>
#include <string>
using namespace std;

int main() {

    string roman;
    cout << "Enter Roman: ";
    cin >> roman;

    int result = 0;

    for (size_t i = 0; i < roman.length(); i++) {

        int curr = 0;
        int next = 0;

        // current value
        if (roman[i] == 'I') curr = 1;
        else if (roman[i] == 'V') curr = 5;
        else if (roman[i] == 'X') curr = 10;
        else if (roman[i] == 'L') curr = 50;
        else if (roman[i] == 'C') curr = 100;
        else if (roman[i] == 'D') curr = 500;
        else if (roman[i] == 'M') curr = 1000;

        // next value (if exists)
        if (i + 1 < roman.length()) {
            if (roman[i + 1] == 'I') next = 1;
            else if (roman[i + 1] == 'V') next = 5;
            else if (roman[i + 1] == 'X') next = 10;
            else if (roman[i + 1] == 'L') next = 50;
            else if (roman[i + 1] == 'C') next = 100;
            else if (roman[i + 1] == 'D') next = 500;
            else if (roman[i + 1] == 'M') next = 1000;
        }

        if (curr < next)
            result -= curr;
        else
            result += curr;
    }

    cout << "Integer: " << result << endl;
    return 0;
}
