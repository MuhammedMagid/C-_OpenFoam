#include<iostream>
using namespace std;

class Complex
{ 
	float real;
	float imag;
public:
	Complex (){
		real=0.0;
		imag=0.0;
	}
	Complex (float r){
		real = r;
		imag=0.0;
	}
	Complex(float r , float i){
		real=r;
		imag=i;
	}
	~Complex(){
		cout<<"Class Destructored"<<endl;
	}
	void setReal (float r){
		real=r;
	}
	void setImag (float i){
		imag =i;	
	}
	void setComplex(float r, float i){
		real=r;
		imag=i;
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
	Complex operator + (Complex c);
	Complex operator + (float x);	
	friend Complex operator + (float x, Complex c);
	void print(){
		cout<<real<<" "<<imag<<endl;
	}

};

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


int main(){
	Complex c1,c2,c3,c4,c5;
	c1.setReal(2);
	c1.setImag(5);
	c2.setReal(7);
	c2.setImag(21);

	c3 = c1.add(c2);
	c3.print();

	c4=6 + c1;
	c4.print();
	
	c5 = c1 +3;
	c5.print();

	return 0;
};
