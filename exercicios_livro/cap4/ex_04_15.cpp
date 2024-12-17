// Exercício 4.15: ex_04_15.cpp
// Calcula e exibe os redimentos na semana de cada vendedor.
// 17/12/2024 por Reginaldo Moura
// Resolução do item 4.15 da lista dde exercícios do capítulo 04

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    //declaração das váriaveis
    double fixo;
    double vendas;
    double taxaComissao;
    double extra;
    double salario;

    // inicialização das variáveis
    fixo = 200;
    taxaComissao = 9 / 100.00;

    // solicita o valor das vendas ou valor de sentinela
    std::cout << "Entre com as vendas em dolar (-1 para terminar): ";
    std::cin >> vendas;

    // loop para calcular a comissão de cada vendedor
    while (vendas != -1)
    {
        // calcula e exibe o valor do salario
        extra = vendas * taxaComissao;
        salario = fixo + extra;
        std::cout << "Salario: " << std::setprecision(2) << std::fixed << salario << '\n';

        // solicita o valor das vendas ou valor de sentinela
        std::cout << "\nEntre com as vendas em dolar (-1 para terminar): ";
        std::cin >> vendas;
    } // fim do loop

    return 0;
} // fim de main