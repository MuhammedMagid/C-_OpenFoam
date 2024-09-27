#include<iostream>
using namespace std;
#include<cmath>
#include<string>
#include <map>

	double Reynolds (double u, double l, double rho, double mu);
	double Prandtl (double c_p, double mu, double k);
	double Nusselt (double h, double l, double k );
	double Sherwood (double h_d, double l, double D );
	double Froude (double u, double l , double g);
	double Grashof (double nu , double l, double beta, double deltaT, double g);
	double Mach (double u, double v);
	double Schmidt (double rho, double mu, double D);

	int main()
	{
		
		double rho  , u , l , mu , nu, c_p , k , h , d, h_d, v , D , deltaT;
		double g = 9.81;
		
		map<string, string> symbol  = {
			{"Re","Reynolds number"},{"u", "Velocity"}, {"rho ", "Density"},{"l", "Characteristic length"}, {"mu","Dynamic viscosity"}
			};

		int dnumber;

		
		string lineSingle = "------------------------------------------------";
		string lineDouble = "================================================";
		
		cout << lineDouble <<endl;
		cout<<  "  =========       |"<< "  dimensionlessNumbers.cpp" <<endl ;
		cout<<  "  \\\\      /       |"<< "  OpenFoam Training"<<endl;
		cout<<   "   \\\\    /        |" <<  "  Developer: Muhammed Magid" <<endl;
        cout<<    "    \\\\  /         |"<<endl;
        cout<<    "     \\\\/          |" <<  " [Basic]"<<endl;

		cout << lineDouble <<endl;
				
		//Header
		cout <<endl<< "Type the code of the dimensioless number to calculate"<<endl;
		cout<<lineSingle<<endl;
		cout << "10	Reynolds number	(Re)"<<endl;
		cout << "20	Prandtl Number	(Pr)" <<endl;
		cout << "30	Nusselt number	(Nu)" <<endl;
		cout << "40	Sherwood Number	(Sh)" <<endl;
		cout << "50	Froude number	(Fr)" <<endl;
		cout << "60	Grashof Number	(Gr)" <<endl;
		cout << "70	Mach number	(Ma)" <<endl;
		cout << "80	Schmidt number	(Sc)" <<endl;

		cout << lineSingle <<endl;
		cout << "Code: ";
		cin >> dnumber;
		cout << lineSingle <<endl;
		
		switch(dnumber) {
			
			
		//Reynolds number 
		case 10:
			//details
			cout <<"Eqn in LaTex: Re = \\frac{\\rho  u L}{\\mu}" <<endl;
			cout<< "Where" <<endl;
			cout<<"Re:	 " <<symbol["Re"] <<endl;
			cout<<"rho:	 " <<symbol["rho "] <<endl;
			cout<<"u:	 " <<symbol["u"] <<endl;
			cout<<"L:	 " <<symbol["l"] <<endl;
			cout<<"mu:	 " <<symbol["mu"] <<endl;
			cout << lineSingle<<endl;
			// print Re value
			cout << Reynolds(u,l,rho,mu) <<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;
			break;
			
		//Prandtl number
		case 20:

			// print value
			cout << lineSingle<<endl;
			cout<<Prandtl(c_p,mu,k)<<endl;		
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;			
			break;
		
		//Nusselt number
		case 30:
			// print value
			cout << lineSingle<<endl;
			cout <<Nusselt(h,l,k)<<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;
			break;
			
		case 40:
			cout << "02";
			break;
		
		case 50:
			cout << "02";
			break;
		case 60:
			cout << "02";
			break;
		
		case 70:
			cout << "02";
			break;
			
		case 80:
			cout << "02";
			break;

		default:
			cout << "Enter a valid CODE";
		}

	}

	double Reynolds (double u, double l, double rho, double mu){
		
		//calculations
		cout << "Enter the values in order"<<endl;
		cout << "rho = ";
		cin >>rho;
		cout << "u = ";
		cin >> u;
		cout << "L = ";
		cin >> l;
		cout << "mu = ";
		cin >> mu;
		cout << "Re = ";
		
		return (u*l*rho)/mu ;
	};
	double Prandtl (double c_p, double mu, double k){
		//calculations
		cout << "Enter the values in order"<<endl;
		cout << "C_p = ";
		cin >>c_p;
		cout << "mu = ";
		cin >> mu;
		cout << "kbhit = ";
		cin >> k;
		cout << "Pr = "; 
		return (c_p*mu)/k;
	};
	double Nusselt (double h, double l, double k ){
		//calculations
		cout << "Enter the values in order"<<endl;
		cout << "h = ";
		cin >>h;
		cout << "L = ";
		cin >> l;
		cout << "k = ";
		cin >> k;
		cout<< "Nu = "; 

		return (h*l)/k;
	};
	double Sherwood (double h_d, double l, double D){
		return (h_d*l)/D ;
	};
	double Froude (double u, double l , double g){
		return u/sqrt(g*l) ;
	};
	double Grashof (double nu , double l, double beta, double deltaT ,double g){
		return (pow(l,3)*beta*g*deltaT)/nu;
	};
	double Mach (double u, double v){
		return u/v;
	};
	double Schmidt (double rho, double mu, double D){
		return mu/(rho*D);
	};