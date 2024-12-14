// Exercício 4.13: ex_04_13.cpp
// Calcular e exibir a quilometragem de veículos por litro de combustível
// 14/12/2024 por Reginaldo Moura
// Resolção da lista de exercícios do capitulo 4, item 4.13

#include <iostream>

int main(int argc, char* argv[])
{
    // declaração das variáveis
    int combustivel;         // combustível consumido
    int quilometragem;        // quilometragem rodada
    double resultado;           // relação km/l deste veículo
    int totalCombustivel;    // combustível total gasto
    int totalQuilometragem;  // quilometragem total rodada
    double totalResultado;      // relação total de km/l

    // fase de inicialização
    totalCombustivel = 0;
    totalQuilometragem = 0;

    // fase de processamento
    std::cout << "Insira a quilometragem (ou -1 para sair): ";
    std::cin >> quilometragem;

    while (quilometragem != -1)
    {
        std::cout << "Insira a quantidade de combustivel consumido: ";
        std::cin >> combustivel;

        resultado = static_cast<double> (quilometragem) / combustivel;
        std::cout << "Km/litro deste tanque: " << resultado;

        totalQuilometragem += quilometragem;
        totalCombustivel += combustivel;

        // fase de finalização
        if (totalQuilometragem > 0)
        {
            totalResultado = static_cast <double> (totalQuilometragem) / totalCombustivel;
            std::cout << "\nTotal Km/litro: " << totalResultado;
        } // fim while

        std::cout << '\n'; // exibe uma quebra de linha
        std::cout << "\nInsira a quilometragem (ou -1 para sair): ";
        std::cin >> quilometragem;
        
    } // fim while

    return 0;
} // fim de main