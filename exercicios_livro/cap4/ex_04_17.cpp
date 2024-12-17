// Exercício 4.17: ex_04_17.cpp
// Determinar e imprimir o maior número digitado entre os 10 inseridos.
// 17/12/2024 por Reginaldo Moura
// Resolução do item 4.17 da lista dde exercícios do capítulo 04

#include <iostream>

int main(int argc, char* argv[])
{
    // declaração e inicialização das variáveis
    int number;
    int counter = 1;
    int largest = 0;

    // loop
    while (counter <= 10)
    {
        std::cout << "Entre com a quantidade de vendas: ";
        std::cin >> number;

        // determina o maior
        if (number > largest)
        {
            largest = number;
        }

        // imprime o maior encontrado
        std::cout << "O maior numero encontrado: " << largest << '\n';

        counter++;
    } // fim do loop

} // fim de main