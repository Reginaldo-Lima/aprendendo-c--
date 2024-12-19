// Exercício 4.25: ex_04_25.cpp
// Receber o tamanho do lado e imprimir um quadrado.
// 18/12/2024 por @Reginaldo-Lima
// Resolução do item 4.25 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main()
{
    // declaração das variáveis
    int lado, linha, coluna;

    //solicita o lado
    std::cout << "Informe o lado do quadrado: ";
    std::cin >> lado;

    // verifica se o tamanho do lado está entre 1 até 20
    if (lado >= 1){
        if (lado <= 20){
            linha = lado;

            // primiero loop
            while (linha >= 1)
            {
                coluna = lado;
                

                // segundo loop
                while (coluna >=1)
                {
                    
                    if (linha == lado)
                    {
                        std::cout << "*";
                    }
                    else if (linha == 1)
                    {
                        std::cout << "*";
                    }
                    else
                    {
                        if (coluna == lado)
                        {
                            std::cout << "*";
                        }
                        else if (coluna == 1)
                        {
                            std::cout << "*";
                        }
                        else
                        {
                            std::cout << " ";
                        }
                    }
                    coluna--;
                }
                linha--;
                // quando sair do segundo loop imprime uma quebra de linha
                std::cout << '\n';
            }
        }
    }

    return 0;
}