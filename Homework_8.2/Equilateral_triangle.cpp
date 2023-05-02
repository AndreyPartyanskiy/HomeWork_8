
#include "Triangle.h"
#include "Equilateral_triangle.h"
#include "clone_domain_error.h"


Equilateral_triangle::Equilateral_triangle(int a) : Triangle::Triangle(a, b=a, c=a, A=60, B=60, C=60)
{
    if (!((A == B) && (B == C) && (C == 60))) throw clone_domain_error("Ошибка создания фигуры. Причина: не все углы равны 60");
    if (!((a == b) && (b == c))) throw clone_domain_error("Ошибка создания фигуры. Причина: не все стороны равны");
    name = "Равносторонний треугольник";
    this->a = a;
    this->b = a;
    this->c = a;
    this->A = 60;
    this->B = 60;
    this->C = 60;
}

       
   
