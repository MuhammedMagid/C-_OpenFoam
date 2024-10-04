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
	
	void info(string lineDouble);
	void header(string lineSingle);


	int main()
	{
		
		double rho  , u , l , mu , nu, c_p , k , h , d, h_d, v , D , deltaT,beta;
		double g = 9.81;
		
		map<string, string> symbol  = {
			{"Re","Reynolds number"},{"u", "Velocity"}, {"rho ", "Density"},{"l", "Characteristic length"}, {"mu","Dynamic viscosity"}
			};

		int numberCode;

		string lineSingle = "------------------------------------------------";
		string lineDouble = "================================================";
		
		info(lineDouble);
		header(lineSingle) ;


		cin >> numberCode;
		cout << lineSingle <<endl;
		
		switch(numberCode) {
			
			
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
			// print value
			cout << lineSingle<<endl;
			cout <<Sherwood (h_d,l,D)<<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;			
			break;
		
		case 50:
			// print value
			cout << lineSingle<<endl;
			cout <<Froude(u,l,g)<<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;	
			break;
		case 60:
			// print value
			cout << lineSingle<<endl;
			cout <<Grashof(nu,l,beta,deltaT,g)<<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;
			break;
		
		case 70:
			// print value
			cout << lineSingle<<endl;
			cout <<Mach(u,v)<<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;
			break;
			
		case 80:
			// print value
			cout << lineSingle<<endl;
			cout <<Schmidt(rho,mu,D)<<endl;
			cout << lineSingle <<endl;
			cout << "End of Program"<<endl;
			break;

		default:
			cout << numberCode << " :Not a valid CODE" <<endl;
			cout << lineSingle <<endl;
			
		}
		
		return 0;

	}
	
	
	
	
	
	void info(string lineDouble){
		//Info
		cout << lineDouble <<endl;
		cout<<  "  =========       |"<< "  dimensionlessNumbers.cpp" <<endl ;
		cout<<  "  \\\\      /       |"<< "  OpenFoam Training"<<endl;
		cout<<   "   \\\\    /        |" <<  "  Developer: Muhammed Magid" <<endl;
        cout<<    "    \\\\  /         |"<<endl;
        cout<<    "     \\\\/          |" <<  " [Basic]"<<endl;
		cout << lineDouble <<endl;

	}
	
	void header(string lineSingle ){
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
		//calculations
		cout << "Enter the values in order"<<endl;
		cout << "h_d = ";
		cin >>h_d;
		cout << "l = ";
		cin >> l;
		cout << "D = ";
		cout<< "Sh = "; 
		return (h_d*l)/D ;
	};
	double Froude (double u, double l , double g){
		//calculations
		cout << "Enter the values in order"<<endl;
		cout << "u = ";
		cin >>u;
		cout << "l = ";
		cin >> l;
		cout<< "Fr = "; 
		return u/sqrt(g*l) ;
	};
	double Grashof (double nu , double l, double beta, double deltaT ,double g){
				//calculations
		cout << "Enter the values in order"<<endl;
		cout << "nu = ";
		cin >>nu;
		cout << "l = ";
		cin >> l;
		cout << "beta = ";
		cin>>beta;
		cout << "deltaT = ";
		cin>>deltaT;
		cout<< "Gr = "; 
		return (pow(l,3)*beta*g*deltaT)/nu;
	};
	double Mach (double u, double v){
		cout << "Enter the values in order"<<endl;
		cout << "u = ";
		cin>>u;
		cout << "v = ";
		cin>>v;
		cout<< "Ma = "; 		
		return u/v;
	};
	double Schmidt (double rho, double mu, double D){
		cout << "Enter the values in order"<<endl;
		cout << "rho = ";
		cin>>rho;
		cout << "mu = ";
		cin>>mu;
		cout << "D = ";
		cin>>D;
		cout<< "Sc = "; 
		return mu/(rho*D);
	};