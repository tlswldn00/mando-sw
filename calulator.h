#pragma once
#include <iostream>

class Calculator
{
private:
    double x;
    char oper;
    double y;
    double sum;

public:
    Calculator(double xval, char op, double yval);
    void calculate();
    void printResult();
    void clear();
};
