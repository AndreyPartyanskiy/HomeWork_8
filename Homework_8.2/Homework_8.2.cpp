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
    
  

    Triangle tr(10, 20, 30, 50, 60, 70);
    Right_triangle rt(10, 20, 30, 50, 40);
    Isosceles_triangle it(10, 20, 50, 80);
    Equilateral_triangle et(30);
    Quadrangle qu(10, 20, 30, 40, 90, 90, 90, 90);
    Parallelogram pa(20, 30, 140, 40);
    Rectangle_ re(10, 20);
    Rhombus rh(30, 30, 40);
    Square sq(20);
   
    try
    {
    tr.print_info();
    rt.print_info();
    it.print_info();
    et.print_info();
    qu.print_info();
    re.print_info();
    pa.print_info();
    sq.print_info();
    rh.print_info();
    }
    catch (const clone_domain_error& cde)
    {
        std::cout << cde.what() << std::endl;
    }

    
}
