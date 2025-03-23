// Description: Overloading the + operator for example.

#include <iostream>

class Complex {
    public:
    double real, imag;
    Complex(double real = 0., double imag = 0.);
    void print();
};

Complex::Complex(double r, double i) : real(r), imag(i) {}

void Complex::print() {
    std::cout << real << " " << imag << std::endl;
}

Complex operator+(const Complex & c1, const Complex & c2) {
    Complex result;
    result.real = (c1.real + c2.real); result.imag = (c1.imag +
        c2.imag);
        return result;
}

int main() {
    Complex x(4, 4);
    Complex y(6, 6);

    Complex z = x + y;

    z.print();
}