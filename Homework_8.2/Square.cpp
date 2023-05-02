
#include "Rhombus.h"
#include "Square.h"
#include "clone_domain_error.h"

    Square :: Square(int a) : Rhombus :: Rhombus(a,A=90, B=90)
    {
        if (!((A == 90) && (B == 90) && (C == 90) && (D == 90))) throw clone_domain_error("Ошибка создания фигуры. Причина: углы А,С,B,D не равны 90");
        name = "Квадрат";
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
  
    }

   