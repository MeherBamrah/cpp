// Write a program to check number palindrome and string palindrome.

#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a palindrome
bool isNumberPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}

// Function to check if a string is a palindrome
bool isStringPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int number;
    string word;

    // Check number palindrome
    cout << "Enter a number: ";
    cin >> number;
    if (isNumberPalindrome(number))
        cout << number << " is a palindrome number." << endl;
    else
        cout << number << " is NOT a palindrome number." << endl;

    // Check string palindrome
    cout << "Enter a string: ";
    cin >> word;
    if (isStringPalindrome(word))
        cout << "\"" << word << "\" is a palindrome string." << endl;
    else
        cout << "\"" << word << "\" is NOT a palindrome string." << endl;

    return 0;
}
