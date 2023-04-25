#include "Figure.h"

    Figure :: Figure()
    {
        name = "Фигура";
    };

    void Figure::print_info_()
    {
        std::cout << name << ": " << std::endl;
    };