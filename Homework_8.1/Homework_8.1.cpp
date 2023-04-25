// Homework_8.1.cpp

#include <iostream>
#include <windows.h>

class Forbidden_length : public std::exception 
{
public:
    const char* what() const override
    {
        return "Вы ввели слово запретной длины! До свидания";
    }
};

int function(std::string str, int forbidden_length)
{
    int a = size(str);
    if (a == forbidden_length) throw Forbidden_length();
    return (a);
}

int main()
{
    system("chcp 1251");
    system("cls");
    
    std::string st;
    int len_str;
    std::cout << "Введите запретную длину: ";
    std::cin >> len_str;
    for (;;)
    {
        std::cout << "Введите слово: ";
        std::cin >> st;
        try
        {
            std::cout << "Длина слова " << static_cast<char>(34) << st << static_cast<char>(34) << " равна " << function(st, len_str) << std::endl;
        }
        catch (const Forbidden_length& fl)
        {
            std::cout << fl.what() << std::endl;
            return (0);
        };
    }
}
