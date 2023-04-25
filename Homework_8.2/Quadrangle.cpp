
#include <iostream>
#include "Quadrangle.h"
#include "clone_domain_error.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    name = "��������������";
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

    if ((A + B + C+ D) != 360) throw clone_domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");

    std::cout << name << " (������� " << a << ", " << b << ", " << c << ", " << d << "; ���� " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl;

       
    };
