// Exercício 4.35 item a: ex_04_35_a.cpp
// Programa para calcular fatorial.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.35 a) da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    double n;
    double fatorial = 1;

    // solicita o valor de n
    std::cout << "Insira o valor para calcular o fatorial: ";
    std::cin >> n;
    
    // tratamento de números negativos
    if (n < 0)
    {
        std::cout << "Nao foi informado um numero valido.\n";
    }
    else
    {
        // tratamento se caso n igual a 0 ou 1
        if (n == 0)
        {
            std::cout << "O valor de " << n << " fatorial eh: 1";
            return 0;
        }
        if (n == 1)
        {
            std::cout << "O valor de " << n << " fatorial eh: 1";
            return 0;
        }

        // loop que calcula o fatorial
        while (n > 1)
        {
            fatorial *= n;
            n--;
        }

        std::cout << "O fatorial eh: " << fatorial << '\n';
    }

    return 0;
} // fim de main