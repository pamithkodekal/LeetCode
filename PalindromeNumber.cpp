// Given an integer x, return true if x is a

// , and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

//Solution
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) return false;  // x should be positive

//         int original = x;// Or = 121
//         long long rev = 0;//                                         |                  |
//         while (x != 0) {//                                           | x = 12           |  x = 1   
//             int digit = x % 10;// Digit = 121%10 == Digit = 1        | digit = 2        |  digit = 1   
//             rev = rev * 10 + digit; // rev = 0*10=0+1 Therefore Rev=1| rev == 10+2==12  |  rev = 12*10 + 1 == 121 
//             x /= 10;// 121/10 =   12                                 | x=1              | x=0
//         }

//         return original == rev;// 121 == 121 
//     }
// };

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;  // Negative numbers are not palindromes

    int original = x;
    long long rev = 0;  // use long long to handle large numbers

    while (x != 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }

    return original == rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
