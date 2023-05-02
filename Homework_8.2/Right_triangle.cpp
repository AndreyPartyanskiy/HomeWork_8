
#include "Triangle.h"
#include "Right_triangle.h"
#include "clone_domain_error.h"

Right_triangle::Right_triangle(int a, int b, int c, int A, int B) : Triangle::Triangle(a, b, c, A, B, C = 90)
{
    if (!(C == 90)) throw clone_domain_error("Ошибка создания фигуры. Причина: угол C не равен 90");
    name = "Прямоугольный треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C; 
};

