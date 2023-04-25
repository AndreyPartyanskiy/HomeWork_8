
#include "Rhombus.h"
#include "Square.h"
#include "clone_domain_error.h"

    Square :: Square(int a) : Rhombus :: Rhombus(a, A, B)
    {
        name = "�������";
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };

    void Square::print_info()
    {
        if ((A + B + C + D) != 360) throw clone_domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");
        if (!((A == 90) && (B == 90) && (C == 90) && (D == 90))) throw clone_domain_error("������ �������� ������. �������: ���� �,�,B,D �� ����� 90");
        if (!((a == c) && (b == d) && (a==b))) throw clone_domain_error("������ �������� ������. �������: ������� a,c,b,d �� �����");
        std::cout << name << " (������� " << a << ", " << b << ", " << c << ", " << d << "; ���� " << A << ", " << B << ", " << C << ", " << D << ") ������" << std::endl;
    };