
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "clone_domain_error.h"


    Parallelogram :: Parallelogram(int a, int b, int A, int B) : Quadrangle :: Quadrangle(a, b, c, d, A, B, C, D)
    {
        name = "Параллелограмм";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    };

    void Parallelogram::print_info()
    {
        if ((A + B + C + D) != 360) throw clone_domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");
        if (!((A == C) && (B == D))) throw clone_domain_error("Ошибка создания фигуры. Причина: углы А,С и B,D попарно не равны");
        if (!((a == c) && (b==d))) throw clone_domain_error("Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны");
        std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;


    };
