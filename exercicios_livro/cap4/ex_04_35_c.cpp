// Exercício 4.35 item c: ex_04_35_c.cpp
// Programa que estima o valor da constante matemática e^x (constante de Euler elevado a x).
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.35 c) da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    double ex = 1.0;
    double x;
    int termos;
    double potencia = 1.0;
    double fatorial = 1.0;

    // solicita a quantidade de termos e a potência
    std::cout << "Informe a quantidade de termos para a constante e: ";
    std::cin >> termos;
    std::cout << "Informe o valor para potencia: ";
    std::cin >> x;
    
    // tratamento se termos for 0
    if (termos < 0)
    {
        std::cout << "\nNumero invalido de termos. Deve ser maior que ou igual a zero.\n";
        return 0;
    }

    else
    {
        // tratamento de x = 0
        if (x == 0)
        {
            std::cout << "\ne^0 eh 1\n";
        }
        else
        {
            int i = 1;
            while (i <= termos)
            {
                fatorial *= i;
                potencia *= x;
                ex += potencia / fatorial;
                i++;
            }

            std::cout << "\nO valor de e^" << x << " eh: " << ex << '\n';
        }
    }

    return 0;
} // fim de main