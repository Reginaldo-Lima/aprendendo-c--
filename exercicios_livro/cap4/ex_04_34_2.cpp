// Exercício 4.34 parte 2: ex_04_34_2.cpp
// Programa para criptografar um numero inteiro com quatro dígitos.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.34 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    int numero, d1, d2, d3, d4;
    int original = 0;

    // solicita um número com 4 dígitos
    std::cout << "Informe um numero criptografado com quatro digitos: ";
    std::cin >> numero;

    // separa os dígitos
    d1 = numero / 1000;
    d2 = (numero / 100) % 10;
    d3 = (numero / 10) % 10;
    d4 = numero % 10;

    // descriptografa os digitos
    d1 -= 7;
    if (d1 < 0)
    {
        d1 += 10;
    }
    d2 -= 7;
    if (d2 < 0)
    {
        d2 += 10;
    }
    d3 -= 7;
    if (d3 < 0)
    {
        d3 += 10;
    }
    d4 -= 7;
    if (d3 < 0)
    {
        d3 += 10;
    }

    // ordena dos digitos
    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    original = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    // imprime o numero criptogrado
    std::cout << "O numero original eh: " << original << '\n';

    return 0;
} // fim de main