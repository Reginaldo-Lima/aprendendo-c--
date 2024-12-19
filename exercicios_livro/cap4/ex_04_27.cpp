// Exercício 4.27: ex_04_27.cpp
// Receber o tamanho do lado e imprimir um quadrado.
// 18/12/2024 por Reginaldo Moura
// Resolução do item 4.27 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main (int argc, char* argv[])
{
    // declaração das variáveis
    int numero; // número informado pelo usuário
    int resto; // obtem o bit menos expressivo
    int binario = 0; // o próprio binário
    int fator = 1; // fator de base 10

    // solicita um número
    std::cout << "Insira um numero: ";
    std::cin >> numero;

    // tratamento de 0
    if (numero == 0)
    {
        std::cout << "0 em binario eh 0.\n";
        return 0; // encerra o programa
    }

    // loop que processa o número para calcular o binário
    while (numero > 0)
    {
        resto = numero % 2; // Obtém o bit menos significativo
        binario += resto * fator; // Adiciona o bit à posição correta no número binário
        fator *= 10; // Avança para a próxima posição decimal
        numero /= 2; // Divide o número por 2
    }

    // Exibe o resultado final
    std::cout << "O numero em binario eh: " << binario << std::endl;

    return 0;   
} // fim main