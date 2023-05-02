// Homework_8.2.cpp 

#include <iostream>
#include <windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle_.h"
#include "Rhombus.h"
#include "Square.h"
#include "clone_domain_error.h"

int main()
{
    system("chcp 1251");
    system("cls");
    
    try
    {
    Triangle tr(10, 20, 30, 50, 60, 70);
    tr.print_info();
    Right_triangle rt(10, 20, 30, 50, 40);
    rt.print_info();
    Isosceles_triangle it(10, 20, 50, 80);
    it.print_info();
    Equilateral_triangle et(30);
    et.print_info();
    Quadrangle qu(10, 20, 30, 40, 90, 90, 90, 90);
    qu.print_info();
    Parallelogram pa(10, 20, 90, 90);
    pa.print_info();
    Rectangle_ re(10, 20);
    re.print_info();
    Rhombus rh(10, 90, 90);
    rh.print_info();
    Square sq(10);
    sq.print_info();
    }
    catch (const clone_domain_error& cde)
    {
        std::cout << cde.what() << std::endl;
    }
    
}
