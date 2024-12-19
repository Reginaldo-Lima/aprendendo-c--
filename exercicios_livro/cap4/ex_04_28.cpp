// Exercício 4.28: ex_04_28.cpp
// Imprimir um padrão de tabuleiro.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.28 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    // declaração das variáveis
    int linhas = 9;
    int contador = 1;
    int colunas;

    // loop principal que imprime o padrão
    while (contador <= linhas)
    {
        colunas = 7;
        // define uma linha para pular
        if (contador == 4)
        {
            contador++;
        }
        
        // se contador for par, imprime um espaço no começo da linha
        if ((contador % 2) == 0)
        {
            std::cout << " ";
        }

        // loop que imprime as colunas
        while (colunas >= 1)
        {
            std::cout << "* ";
            colunas--;
        }

        // imprime uma quebra de linha
        std::cout << std::endl;
        contador++; // incrementa o contador
    } // fim do loop principal

    return 0;
} // fim de main