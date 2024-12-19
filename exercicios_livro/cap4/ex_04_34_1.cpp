// Exercício 4.34 parte 1: ex_04_34_1.cpp
// Programa para criptografar um numero inteiro com quatro dígitos.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.34 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    int numero, d1, d2, d3, d4;
    int criptografado = 0;

    // solicita um número com 4 dígitos
    std::cout << "Informe um numero valido com quatro digitos: ";
    std::cin >> numero;

    // separa os dígitos
    d1 = numero / 1000;
    d2 = (numero / 100) % 10;
    d3 = (numero / 10) % 10;
    d4 = numero % 10;

    // criptografa os digitos
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    // troca a ordem dos digitos
    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    criptografado = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    // imprime o numero criptogrado
    std::cout << "O numero criptografado eh: " << criptografado << '\n';

    return 0;
} // fim de main