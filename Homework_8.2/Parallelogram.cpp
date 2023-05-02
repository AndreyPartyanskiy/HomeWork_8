
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "clone_domain_error.h"


    Parallelogram :: Parallelogram(int a, int b, int A, int B) : Quadrangle :: Quadrangle(a, b, c=a, d=b, A, B, C=A, D=B)
    {
        if (!((A == C) && (B == D))) throw clone_domain_error("������ �������� ������. �������: ���� �,� � B,D ������� �� �����");
        if (!((a == c) && (b == d))) throw clone_domain_error("������ �������� ������. �������: ������� a,c � b,d ������� �� �����");
        name = "��������������";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;     
    };

   
