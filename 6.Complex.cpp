//Create a class called Complex for performing following operations:
//(a) Overload increment and decrement operators for increasing and decreasing complex number values (Unary operator overload).
//(b) Overload ‘+’ op and ‘-‘op for complex numbers (Binary operator overloading).


#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator++() {      
        ++real;
        ++imag;
        return *this;        
    }

    Complex operator--() {     
        --real;
        --imag;
        return *this;
    }

     Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

     Complex operator-(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5), c3;

    cout << "Initial c1: ";
    c1.display();

    cout << "After increment (++c1): ";
    ++c1;       
    c1.display();

    cout << "After decrement (--c1): ";
    --c1;       
    c1.display();

    cout << "c1 + c2 = ";
    c3 = c1 + c2;   
    c3.display();

    cout << "c1 - c2 = ";
    c3 = c1 - c2;  
    c3.display();

    return 0;
}
