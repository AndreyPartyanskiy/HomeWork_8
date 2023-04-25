
#include "Triangle.h"
#include "Equilateral_triangle.h"
#include "clone_domain_error.h"


Equilateral_triangle::Equilateral_triangle(int a) : Triangle::Triangle(a, b, c, A, B, C)
{
    name = "Равносторонний треугольник";
    this->a = a;
    this->b = a;
    this->c = a;
    this->A = 60;
    this->B = 60;
    this->C = 60;
}
        
        void Equilateral_triangle::print_info()

        {
            if ((A + B + C) != 180) throw clone_domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180");
            if (!((A == B) && (B== C) && (C== 60))) throw clone_domain_error("Ошибка создания фигуры. Причина: не все углы равны 60");
            if (!((a == b) && (b == c))) throw clone_domain_error("Ошибка создания фигуры. Причина: не все стороны равны");
            std::cout << name << " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << std::endl;
        };


       
   
