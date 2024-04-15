#include "calculator.h"
#include <iostream>

Calculator::Calculator(double xval, char op, double yval)
{
    x = xval;
    oper = op;
    y = yval;
}

void Calculator::calculate()
{
    switch (oper)
    {
    case '+':
        sum = x + y;
        break;
    case '-':
        sum = x - y;
        break;
    case '*':
        sum = x * y;
        break;
    case '/':
        if (y != 0) {
            sum = x / y;
        }
        else {
            std::cout << "0으로 나눌 수 없습니다." << std::endl;
        }
        break;
    default:
        std::cout << "잘못된 연산자" << std::endl;
        break;
    }
}

void Calculator::printResult()
{
    std::cout << "결과 : " << sum << std::endl;
}

void Calculator::clear()
{
    sum = 0;
}
