// Exercício 4.29: ex_04_29.cpp
// Imprime as potências de 2, em um loop infinito.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.29 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    int dois = 2;
    
    // loop ifinito
    while (true)
    {
        std::cout << dois << ", ";
        dois *= 2;
    }
    return 0;
}

// Quando "dois" passar do limite máximo que o tipo int suporta, irá acontecer extravazamento e será impresso 0