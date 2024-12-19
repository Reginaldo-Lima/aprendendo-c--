// Exercício 4.32: ex_04_32.cpp
// Lê três valores e determina se é um triangulo.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.32 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    double lado1, lado2, lado3;

    // solicita os três lados
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

    // determina se é um triângulo
    if ((lado1 + lado2) > lado3)
    {
        std::cout << "Eh um triangulo!";
    }
    else if ((lado2 + lado3) > lado1)
    {
        std::cout << "Eh um triangulo!";
    }
    else if ((lado1 + lado3) < lado2)
    {
        std::cout << "Eh um triangulo!";
    }
    else
    {
        std::cout << "Nao eh um triangulo!";
    }

    return 0;
} // fim de main