
#include "Parallelogram.h"
#include "Rhombus.h"
#include "clone_domain_error.h"

Rhombus :: Rhombus(int a, int A, int B) :Parallelogram :: Parallelogram(a, b, A, B)
{
    name = "����";
    this->a = a;
    this->b = a;
    this->c = a;
    this->d = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
};

void Rhombus::print_info()
{
    //if ((A + B + C + D) != 360) throw clone_domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");
    //if (!((A == C) && (B == D))) throw clone_domain_error("������ �������� ������. �������: ���� �,� � B,D ������� �� �����");
    //if (!((a == c) && (b == d) && (a == b))) throw clone_domain_error("������ �������� ������. �������: ������� a,c,b,d �� �����");
    std::cout << name << " (������� " << a << ", " << b << ", " << c << ", " << d << "; ���� " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl;
};