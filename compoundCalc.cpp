// function definitions for compoundCalc.h
#include "compoundCalc.h"
#include <cmath>

double compoundCalc(double P, double r, double t)   // definition
    { return P * pow((1 + r), t); }