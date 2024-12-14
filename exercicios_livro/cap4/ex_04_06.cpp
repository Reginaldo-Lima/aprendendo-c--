// Exercicio 4.6: ex_04_06.cpp
// Resolução do exercício para mostrar os valores das variáveis
// 12/12/2024 por Reginaldo Moura

#include <iostream>

int main()
{
    int x = 5;
    int product = 5;
    int quotient = 5;

    //parte a
    product *= x++;
    std::cout << "Value of product after calculation: " << product << std::endl;
    std::cout << "value of x after calculation: " << x << std::endl;

    // parte b
    x = 5; // reinicializa o valor de x
    quotient /= ++x;
    std::cout << "Value of quotient after calculation: " << quotient << std::endl;
    std::cout << "Value of x after calculation: " << x << std::endl;

    return 0;
}