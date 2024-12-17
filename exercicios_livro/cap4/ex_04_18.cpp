// Exercício 4.18: ex_04_18.cpp
// Imprime uma tabela.
// 17/12/2024 por Reginaldo Moura
// Resolução do item 4.18 da lista dde exercícios do capítulo 04

#include <iostream>

int main(int argc, char* argv[])
{
    // delaração das variáveis
    int counter = 1;
    int number = 1;

    //imprime o topo da tabela
    std::cout << "N\t10*N\t100*N\t1000*N\n";

    // loop while
    while (counter <= 5)
    {
        std::cout << '\n' << number << '\t' << number * 10 << '\t' << number * 100 << '\t' << number * 1000;

        counter++;
        number++;
    }

    return 0;
} // fim main