// Exercício 4.35 item b: ex_04_35_b.cpp
// Programa que estima o valor da constante matemática e (constante de Euler).
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.35 b) da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    double e = 1.0;
    double fatorial = 1.0;
    double termos;


    // solicita o valor de n termos
    std::cout << "Insira a quantidade de termos para a constante e: ";
    std::cin >> termos;
    
    // tratamento de números negativos
    if (termos < 0)
    {
        std::cout << "Numero invalido de termos. Deve ser maior que ou igual a zero.\n";
        return 0;
    }
    
    else
    {
        if (termos == 0)
        {
            std::cout << "O valor de e para termos = 0 eh 1\n";
        }
        else
        {
            int i = 1; // contador

            // loop que calcula o fatorial
            while (i <= termos)
            {
                fatorial *= i;
                e += (1.0 / fatorial);
                i++;
            }

            std::cout << "O valor de e eh: " << e << '\n';
        }
    }

    return 0;
} // fim de main