#include "Complex.h"
#include<iostream>
using namespace std;


Complex::Complex() {
    real = 0.0;
    imag = 0.0;
}

Complex::Complex(float r){
	real = r;
	imag=0.0;
}
Complex::Complex(float r , float i){
	real=r;
	imag=i;
}
Complex :: ~Complex(){
	cout<<"Class Destructored"<<endl;
}
void Complex :: setReal (float r){
	real=r;
}
void Complex :: setImag (float i){
	imag =i;	
}
void Complex :: setComplex(float r, float i){
	real=r;
	imag=i;
}
float Complex :: getReal(){
	return real;
}
float Complex :: getImag(){
	return imag;
}
Complex Complex :: add(Complex other){
	Complex temp;
	temp.real = real + other.real;
	temp.imag = imag + other.imag ;
	return temp;
}
Complex Complex :: sub(Complex other){
	Complex temp;
	temp.real = real - other.real;
	temp.imag = imag - other.imag;
	return temp;
}


void Complex :: print(){
cout<<real<<" "<<imag<<endl;
}


Complex Complex :: operator + (Complex c){
	Complex b;
	b.real = real + c.real;
	b.imag= imag + c.imag;
	return b;
}
Complex Complex :: operator + (float x){
	Complex b;
	b.real = real + x;
	b.imag= imag;
	return b;
}
Complex operator + (float x, Complex c){   ///stand alone function
	Complex b;
	b.real = c.real + x;
	b.imag = c.imag;
	return b;
}


