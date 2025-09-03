// Write a program to check number palindrome and string palindrome.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Palindrome {
public:
    virtual bool isPalindrome() = 0; // Pure virtual function
};

// Derived class to check number palindrome
class NumberPalindrome : public Palindrome {
private:
    int number;
public:
    NumberPalindrome(int n) {
        number = n;
    }

    bool isPalindrome() override {
        int original = number, reversed = 0, digit;
        while (number > 0) {
            digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }
        return original == reversed;
    }
};

// Derived class to check string palindrome
class StringPalindrome : public Palindrome {
private:
    string str;
public:
    StringPalindrome(string s) {
        str = s;
    }

    bool isPalindrome() override {
        int start = 0, end = str.length() - 1;
        while (start < end) {
            if (str[start] != str[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};

int main() {
    int num;
    string text;

    cout << "Enter a number: ";
    cin >> num;
    Palindrome* numCheck = new NumberPalindrome(num);
    if (numCheck->isPalindrome())
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;
    delete numCheck;

    cout << "\nEnter a string: ";
    cin >> text;
    Palindrome* strCheck = new StringPalindrome(text);
    if (strCheck->isPalindrome())
        cout << text << " is a palindrome string." << endl;
    else
        cout << text << " is not a palindrome string." << endl;
    delete strCheck;

    return 0;
}
