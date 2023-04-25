
#include <iostream>
#include "Quadrangle.h"
#include "clone_domain_error.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    name = "Четырёхугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
};

void Quadrangle :: print_info()
    {

    if ((A + B + C+ D) != 360) throw clone_domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");

    std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;

       
    };
