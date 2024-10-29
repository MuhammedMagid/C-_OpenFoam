
#include "Number.h"


// Reynolds Number
Reynolds::Reynolds() {}

void Reynolds::displayFormula() {
    std::cout << "Re = \\frac{\\rho u L}{\\mu}\n";
}

void Reynolds::input() {
    std::cout << "Enter rho, u, L, mu in order:\n";
    std::cin >> rho >> u >> l >> mu;
}

void Reynolds::calculate() {
    input();
    std::cout << "Reynolds Number (Re) = " << (rho * u * l) / mu << std::endl;
}

// Prandtl Number
Prandtl::Prandtl() {}

void Prandtl::displayFormula() {
    std::cout << "Pr = \\frac{c_p \\mu}{k}\n";
}

void Prandtl::input() {
    std::cout << "Enter C_p, mu, k in order:\n";
    std::cin >> c_p >> mu >> k;
}

void Prandtl::calculate() {
    input();
    std::cout << "Prandtl Number (Pr) = " << (c_p * mu) / k << std::endl;
}

// Nusselt Number
Nusselt::Nusselt() {}

void Nusselt::displayFormula() {
    std::cout << "Nu = \\frac{hl}{k}\n";
}

void Nusselt::input() {
    std::cout << "Enter h, L, k in order:\n";
    std::cin >> h >> l >> k;
}

void Nusselt::calculate() {
    input();
    std::cout << "Nusselt Number (Nu) = " << (h * l) / k << std::endl;
}

// Sherwood Number
Sherwood::Sherwood() {}

void Sherwood::displayFormula() {
    std::cout << "Sh = \\frac{h_d l}{D}\n";
}

void Sherwood::input() {
    std::cout << "Enter h_d, L, D in order:\n";
    std::cin >> h_d >> l >> D;
}

void Sherwood::calculate() {
    input();
    std::cout << "Sherwood Number (Sh) = " << (h_d * l) / D << std::endl;
}

// Froude Number
Froude::Froude() {}

void Froude::displayFormula() {
    std::cout << "Fr = \\frac{u}{\\sqrt{gL}}\n";
}

void Froude::input() {
    std::cout << "Enter u, L, g in order:\n";
    std::cin >> u >> l >> g;
}

void Froude::calculate() {
    input();
    std::cout << "Froude Number (Fr) = " << u / sqrt(g * l) << std::endl;
}

// Grashof Number
Grashof::Grashof() {}

void Grashof::displayFormula() {
    std::cout << "Gr = \\frac{L^3 \\beta g \\Delta T}{\\nu^2}\n";
}

void Grashof::input() {
    std::cout << "Enter nu, L, beta, deltaT, g in order:\n";
    std::cin >> nu >> l >> beta >> deltaT >> g;
}

void Grashof::calculate() {
    input();
    std::cout << "Grashof Number (Gr) = " << (pow(l, 3) * beta * g * deltaT) / (nu * nu) << std::endl;
}

// Mach Number
Mach::Mach() {}

void Mach::displayFormula() {
    std::cout << "Ma = \\frac{u}{v}\n";
}

void Mach::input() {
    std::cout << "Enter u, v in order:\n";
    std::cin >> u >> v;
}

void Mach::calculate() {
    input();
    std::cout << "Mach Number (Ma) = " << u / v << std::endl;
}

// Schmidt Number
Schmidt::Schmidt() {}

void Schmidt::displayFormula() {
    std::cout << "Sc = \\frac{\\mu}{\\rho D}\n";
}

void Schmidt::input() {
    std::cout << "Enter rho, mu, D in order:\n";
    std::cin >> rho >> mu >> D;
}

void Schmidt::calculate() {
    input();
    std::cout << "Schmidt Number (Sc) = " << mu / (rho * D) << std::endl;
}

