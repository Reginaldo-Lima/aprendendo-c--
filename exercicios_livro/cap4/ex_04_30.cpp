// Exercício 4.30: ex_04_30.cpp
// Recebe um valor para o raio de um círculo e calcula e imprime
// o diâmetro, a circunferência e a área.
// 19/12/2024 por Reginaldo Moura
// Resolução do item 4.30 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"

#include <iostream>

int main(int argc, char* argv[])
{
    // declaração das variáveis
    double PI = 3.14159;
    double raio, diametro, circunferencia, area;

    // solicita o raio
    std::cout << "Informe o valor do raio do circulo: ";
    std::cin >> raio;

    // etapa de calculos
    diametro = 2 * raio;
    circunferencia = 2 * PI * raio;
    area = PI * raio * raio;

    // exibe os resultados
    std::cout << "O diametro eh: " << diametro << '\n'; 
    std::cout << "A circunferencia eh: " << circunferencia << '\n'; 
    std::cout << "A area eh: " << area << '\n'; 

    return 0;
} // fim de main