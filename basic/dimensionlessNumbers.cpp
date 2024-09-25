#include<iostream>
using namespace std;
#include<cmath>
#include<string>
#include <map>


	int main()
	{
		string  dash = "*----------------------------------*";
		
		map<string, string> symbol  = {
			{"Re","Reynolds number"},{"u", "Velocity"}, {"rho ", "Density"},{"L", "Characteristic length"}, {"mu","Dynamic viscosity"}
			};

		int dnumber;
		
		//Header
		cout << "Type the code of the dimensioless number to calculate"<<endl;
		cout << "01 Reynolds number (Re)"<<endl;
		cout << "02 Prandtl Number (Pr)" <<endl;
		cout << dash <<endl;
		cout << "Code: ";
		cin >> dnumber;
		cout << dash <<endl;
		
		switch(dnumber) {
			
			
		//Reynolds number case
		case 01:
			
			float rho  , u , L , mu;
			
			//details
			cout <<"Eqn in LaTex: Re = \\frac{\\rho  u L}{\\mu}" <<endl;
			cout<< "Where" <<endl;
			cout<<"Re:	 " <<symbol["Re"] <<endl;
			cout<<"rho:	 " <<symbol["rho "] <<endl;
			cout<<"u:	 " <<symbol["u"] <<endl;
			cout<<"L:	 " <<symbol["L"] <<endl;
			cout<<"mu:	 " <<symbol["mu"] <<endl;
			cout << dash <<endl;
			
			//input data
			cout << "Enter values in order [rho , u , L , mu]"<<endl;;
			cin >> rho >> u >>L >> mu;
			cout << dash <<endl;
			
			//caculation and print
			cout << "Re = " << (rho *u*L)/mu <<endl;
			
			cout << dash <<endl;
			cout << "End of Program"<<endl;
			break;
			
		//
		case 02:
			cout << "02";
			break;
		default:
			cout << "Enter a valid CODE";
	}

		}

