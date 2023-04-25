
#include "Triangle.h"
#include "Right_triangle.h"
#include "clone_domain_error.h"

Right_triangle::Right_triangle(int a, int b, int c, int A, int B): Triangle::Triangle(a, b, c, A, B, C)
{
    name = "������������� �����������";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 90;
};

void Right_triangle::print_info()

{
    if ((A + B + C) != 180) throw clone_domain_error("������ �������� ������. �������: ����� ����� �� ����� 180");
    if (!(C == 90)) throw clone_domain_error("������ �������� ������. �������: ���� C �� ����� 90");
    
    std::cout << name << " (������� " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ") ������" << std::endl;
};
