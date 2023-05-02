
#include "Triangle.h"
#include "Isosceles_triangle.h"
#include "clone_domain_error.h"


    Isosceles_triangle:: Isosceles_triangle(int a, int b, int A, int B ) : Triangle ::Triangle(a, b, c=a, A, B, C=A)
    {   
        if (!(A == C)) throw clone_domain_error("������ �������� ������. �������: ���� A � C �� �����");
        if (!(a == c)) throw clone_domain_error("������ �������� ������. �������: ������� a � c �� �����");
        name = "�������������� �����������";
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = C;
    };
   