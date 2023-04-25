
#include "Parallelogram.h"
#include "Rectangle_.h"
#include "clone_domain_error.h"


    Rectangle_ :: Rectangle_(int a, int b) : Parallelogram :: Parallelogram(a, b, A, B)
    {
        name = "Прямоугольник";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };

    void Rectangle_::print_info()
    {
        if ((A + B + C + D) != 360) throw clone_domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");
        if (!((A == 90) && (B == 90) && (C == 90) && (D == 90))) throw clone_domain_error("Ошибка создания фигуры. Причина: углы А,С,B,D не равны 90");
        if (!((a == c) && (b == d))) throw clone_domain_error("Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны");
        std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
    };