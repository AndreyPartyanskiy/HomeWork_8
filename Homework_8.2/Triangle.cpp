
#include <iostream>
#include "Triangle.h"
#include "clone_domain_error.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
    name = "�����������";
    
    if ((A + B + C) != 180) throw clone_domain_error("������ �������� ������.--- �������: ����� ����� �� ����� 180");
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;  
}

    void Triangle:: print_info()
    { 
        std::cout << name << " (������� " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C << ") ������" << std::endl;   
    };
