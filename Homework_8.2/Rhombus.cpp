
#include "Parallelogram.h"
#include "Rhombus.h"
#include "clone_domain_error.h"

Rhombus :: Rhombus(int a, int A, int B) :Parallelogram :: Parallelogram(a, b=a, A, B)
{ 
    if (!((a == c) && (b == d) && (a == b))) throw clone_domain_error("������ �������� ������. �������: ������� a,c,b,d �� �����");
    if (!((A == C) && (B == D))) throw clone_domain_error("������ �������� ������. �������: ���� �,� � B,D ������� �� �����");
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