#include<iostream>
using namespace std;
#include<cmath>
#include<string>
#include <map>

	double Reynolds (double u, double l, double rho, double mu);
	double Prandtl (double C_p, double mu, double k);
	double Nusselt (double h, double l, double k );
	double Sherwood (double h_d, double l, double d);
	double Froude (double u, double l);
	double Grashof (double nu , double l, double beta, double deltaT);
	double Mach (double u, double v);
	double Schmidt (double rho, double mu, double D);

	int main()
	{
		string  dash = "*----------------------------------*";
		
		double rho  , u , l , mu , nu, c_p , k , h , d, h_d, v , D , deltaT;
		
		map<string, string> symbol  = {
			{"Re","Reynolds number"},{"u", "Velocity"}, {"rho ", "Density"},{"l", "Characteristic length"}, {"mu","Dynamic viscosity"}
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
		
			//details
			cout <<"Eqn in LaTex: Re = \\frac{\\rho  u L}{\\mu}" <<endl;
			cout<< "Where" <<endl;
			cout<<"Re:	 " <<symbol["Re"] <<endl;
			cout<<"rho:	 " <<symbol["rho "] <<endl;
			cout<<"u:	 " <<symbol["u"] <<endl;
			cout<<"L:	 " <<symbol["l"] <<endl;
			cout<<"mu:	 " <<symbol["mu"] <<endl;
			cout << dash <<endl;
			
			//input data
			cout << "Enter values in order [rho , u , L , mu]"<<endl;;
			cin >> rho >> u >>l >> mu;
			cout << dash <<endl;
			
			//caculation and print
			
			cout << Reynolds(u,l,rho,mu)<<endl;
			
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

	double Reynolds (double u, double l, double rho, double mu){
		return (u*l*rho)/mu ;
	};
	double Prandtl (double C_p, double mu, double k);
	double Nusselt (double h, double l, double k );
	double Sherwood (double h_d, double l, double d);
	double Froude (double u, double l);
	double Grashof (double nu , double l, double beta, double deltaT);
	double Mach (double u, double v);
	double Schmidt (double rho, double mu, double D);