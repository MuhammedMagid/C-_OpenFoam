#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <cmath>

#include "DimensionlessNumber.h"



// Reynolds Number
class Reynolds : public DimensionlessNumber {
public:
    Reynolds();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double rho, u, l, mu; // Member variables for input
};

// Prandtl Number
class Prandtl : public DimensionlessNumber {
public:
    Prandtl();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double c_p, mu, k; // Member variables for input
};

// Nusselt Number
class Nusselt : public DimensionlessNumber {
public:
    Nusselt();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double h, l, k; // Member variables for input
};

// Sherwood Number
class Sherwood : public DimensionlessNumber {
public:
    Sherwood();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double h_d, l, D; // Member variables for input
};

// Froude Number
class Froude : public DimensionlessNumber {
public:
    Froude();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double u, l, g; // Member variables for input
};

// Grashof Number
class Grashof : public DimensionlessNumber {
public:
    Grashof();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double nu, l, beta, deltaT, g; // Member variables for input
};

// Mach Number
class Mach : public DimensionlessNumber {
public:
    Mach();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double u, v; // Member variables for input
};

// Schmidt Number
class Schmidt : public DimensionlessNumber {
public:
    Schmidt();
    void calculate() override;
    void displayFormula() override;
    void input() override;
private:
    double rho, mu, D; // Member variables for input
};

#endif 

