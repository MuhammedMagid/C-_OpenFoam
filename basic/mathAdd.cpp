#include<iostream>
using namespace std;

	int main()
	{
		string introStatement , aStatement , bStatement;
		float a , b , addition; 
		
		introStatement = "This program add any two numbers" ;
		aStatement = "Enter the first number ";
		bStatement= "Enter the second number ";

		cout << introStatement <<endl;
		cout << aStatement;
		cin >> a;
		cout << bStatement;
		cin >>b;
		
		addition = a+b;
		
		cout << "Result of " << a << " + " << b << " = " << addition << endl;

	
 	}

