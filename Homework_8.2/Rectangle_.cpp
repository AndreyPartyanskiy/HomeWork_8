
#include "Parallelogram.h"
#include "Rectangle_.h"
#include "clone_domain_error.h"


    Rectangle_ :: Rectangle_(int a, int b) : Parallelogram :: Parallelogram (a, b, A=90, B=90)
    {
        if (!((A == 90) && (B == 90) && (C == 90) && (D == 90))) throw clone_domain_error("������ �������� ������. �������: ���� �,�,B,D �� ����� 90");
        if (!((a == c) && (b == d))) throw clone_domain_error("������ �������� ������. �������: ������� a,c � b,d ������� �� �����");
        name = "�������������";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };