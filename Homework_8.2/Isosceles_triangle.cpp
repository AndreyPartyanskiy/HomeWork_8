
#include "Triangle.h"
#include "Isosceles_triangle.h"
#include "clone_domain_error.h"


    Isosceles_triangle:: Isosceles_triangle(int a, int b, int A, int B ) : Triangle ::Triangle(a, b, c=a, A, B, C=A)
    {   
        if (!(A == C)) throw clone_domain_error("Ошибка создания фигуры. Причина: углы A и C не равны");
        if (!(a == c)) throw clone_domain_error("Ошибка создания фигуры. Причина: стороны a и c не равны");
        name = "Равнобедренный треугольник";
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = C;
    };
   