#include <iostream>
using namespace std;

void checkPalindrome(int num) {
    int original = num;
    int reverse = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse) {
        cout << "It is a Palindrome number";
    } else {
        cout << "It is NOT a Palindrome number";
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkPalindrome(number);  

    return 0;
}
