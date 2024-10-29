#include <iostream>
#include "Calculator.h"
#include "Number.h"


using namespace std;

Calculator::Calculator() {
    calculations[10] = make_unique<Reynolds>();
    calculations[20] = make_unique<Prandtl>();
    calculations[30] = make_unique<Nusselt>();
    calculations[40] = make_unique<Sherwood>();
    calculations[50] = make_unique<Froude>();
    calculations[60] = make_unique<Grashof>();
    calculations[70] = make_unique<Mach>();
    calculations[80] = make_unique<Schmidt>();
}

void Calculator::run() {
    int numberCode;
    cout << "Type the code of the dimensionless number to calculate:\n";
    cout << "10 Reynolds number (Re)\n20 Prandtl number (Pr)\n30 Nusselt number (Nu)\n";
    cout << "40 Sherwood number (Sh)\n50 Froude number (Fr)\n60 Grashof number (Gr)\n";
    cout << "70 Mach number (Ma)\n80 Schmidt number (Sc)\n";
    cout << "Code: "; cin >> numberCode;

    if (calculations.find(numberCode) != calculations.end()) {
        calculations[numberCode]->displayFormula();
        char calculate;
        cout << "Do you want to calculate? y/n\n";
        cin >> calculate;
        if (calculate == 'y') {
            calculations[numberCode]->calculate();
        }
    } else {
        cout << numberCode << " : Not a valid CODE" << endl;
    }
}

