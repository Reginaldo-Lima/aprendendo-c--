// Exercício 4.33: ex_04_33.cpp
// Lê três valores e determina e imprime se poderia ser um triangulo reto.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.33 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    double lado1, lado2, lado3;

    // solicita três valores
    std::cout << "Informe o primeiro lado: ";
    std::cin >> lado1;
    std::cout << "Informe o segundo lado: ";
    std::cin >> lado2;
    std::cout << "Informe o terceiro lado: ";
    std::cin >> lado3;

    // tratamento caso algum lado seja igual a 0 ou negativo
    if (lado1 <= 0)
    {
        std::cout << "Nao eh um triangulo!";
        return 0;
    }
    if (lado2 <= 0)
    {
        std::cout << "Nao eh um triangulo!";
        return 0;
    }
    if (lado3 <= 0)
    {
        std::cout << "Nao eh um triangulo!";
        return 0;
    }

    // Determina se pode ser um triângulo reto
    if ((lado1 * lado1 + lado2 * lado2) == lado3 * lado3)
    {
        std::cout << "\nPode ser um triangulo reto.\n";
    }
    else if ((lado1 * lado1 + lado3 * lado3) == lado2 * lado2)
    {
        std::cout << "\nPode ser um triangulo reto.\n";
    }
    else if ((lado3 * lado3 + lado2 * lado2) == lado1 * lado1)
    {
        std::cout << "\nPode ser um triangulo reto.\n";
    }
    else
    {
        std::cout << "\nNao pode ser um triangulo reto.\n";
    }

    return 0;
} // fim de main