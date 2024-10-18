#pragma once 

class Complex {
private:
    float real;
    float imag;
public:
    Complex();
    Complex(float r);
    Complex(float r, float i);
    ~Complex();

    void setReal(float r);
    void setImag(float i);
    void setComplex(float r, float i);
    float getReal();
    float getImag();

    Complex add(Complex other);
    Complex sub(Complex other);

    Complex operator+(Complex c);
    Complex operator+(float x);
    friend Complex operator+(float x, Complex c);

    void print();
};

