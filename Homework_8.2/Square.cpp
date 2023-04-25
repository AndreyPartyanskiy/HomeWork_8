
#include "Rhombus.h"
#include "Square.h"
#include "clone_domain_error.h"

    Square :: Square(int a) : Rhombus :: Rhombus(a, A, B)
    {
        name = "Квадрат";
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };

    void Square::print_info()
    {
        if ((A + B + C + D) != 360) throw clone_domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");
        if (!((A == 90) && (B == 90) && (C == 90) && (D == 90))) throw clone_domain_error("Ошибка создания фигуры. Причина: углы А,С,B,D не равны 90");
        if (!((a == c) && (b == d) && (a==b))) throw clone_domain_error("Ошибка создания фигуры. Причина: стороны a,c,b,d не равны");
        std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
    };