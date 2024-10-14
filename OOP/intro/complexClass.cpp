#include<iostream>
using namespace std;

class Complex
{ 
	float real;
	float imag;
public:
	void setReal (float r){
		real=r;
	}
	void setImag (float i){
		imag =i;	
	}
	float getReal(){
		return real;
	}
	float getImag(){
		return imag;
	}
	Complex add(Complex other){
		Complex temp;
		temp.real = real + other.real;
		temp.imag = imag + other.imag ;
		return temp;
	}
	Complex sub(Complex other){
		Complex temp;
		temp.real = real - other.real;
		temp.imag = imag - other.imag;
		return temp;
	}	
	void print(){
		cout<<real<<" "<<imag<<endl;
	}
};


int main(){
	Complex c1,c2,c3;
	c1.setReal(2);
	c1.setImag(5);
	c2.setReal(7);
	c2.setImag(21);

	c3 = c1.add(c2);
	c3.print();
	return 0;
};
