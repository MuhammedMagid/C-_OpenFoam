#include "Complex.h"
#include<iostream>
using namespace std;


int main() {
    Complex c1(3, 4);    // Create complex number 3 + 4i
    Complex c2(1, 2);    // Create complex number 1 + 2i

    Complex c3 = c1 + c2; // Add two complex numbers
    c3.print();           // Output should be (4, 6)

    Complex c4 = c1 + 5.0f; // Add a float to a complex number
    c4.print();             // Output should be (8, 4)

    Complex c5 = 5.0f + c1;  // Add float to complex using friend operator
    c5.print();              // Output should be (8, 4)
	
	
    return 0;

}