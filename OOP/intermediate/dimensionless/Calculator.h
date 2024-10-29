#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <map>
#include <memory>
#include "DimensionlessNumber.h"

class Calculator {
public:
    Calculator();
    void run();
private:
    std::map<int, std::unique_ptr<DimensionlessNumber>> calculations;
};

#endif // CALCULATOR_H

