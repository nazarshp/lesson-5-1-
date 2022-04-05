#include <iostream>

int calculate(int a,int b,char c)
{
    switch (c)
    {
    case '+':
            return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        std::cout << "Erorr";
        break;
    }
}



int main()
{
    int a;
    int b;
    char c;
    std::cout << "Enter 1 number: ";
    std::cin >> a;
    std::cout << "Enter 2 number: ";
    std::cin >> b;
    std::cout << "Enter symbol +-*/%: ";
    std::cin >> c;

    std::cout << calculate(a, b, c);
}