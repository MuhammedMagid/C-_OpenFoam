#ifndef DIMENSIONLESSNUMBER_H
#define DIMENSIONLESSNUMBER_H

class DimensionlessNumber {
public:
    virtual void calculate() = 0;
    virtual void displayFormula() = 0;
    virtual void input() = 0;  // Declare input method
    virtual ~DimensionlessNumber() = default;
};


#endif 

