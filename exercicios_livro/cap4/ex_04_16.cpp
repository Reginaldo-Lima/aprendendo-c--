// Exercício 4.16: ex_04_16.cpp
// Determina o pagamento bruto de cada funcionário.
// 17/12/2024 por Reginaldo Moura
// Resolução do item 4.16 da lista dde exercícios do capítulo 04

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    // declaração das variáveis
    int horasTrabalhadas; // qauntidade das horas trabalhadas
    int horasExtras; // qauntidade de horas extras
    double gratificação; // percentagem de gratificação
    double salario; // salário bruto
    double valorHoraTrabalhada; // valor da hora trabalhada
    double valorHoraExtra; // valor da hora extra
    double valorAdicional; // valor adicional ao salario das horas extras

    // inicialização das variáveis
    gratificação = static_cast<double>(50) / 100;

    // solicita a quantidade de horas extras
    std::cout << "Entre com as horas trabalhadas (-1 para terminar): ";
    std::cin >> horasTrabalhadas;

    // loop para determinar o salário de cada funcionário
    while (horasTrabalhadas != -1)
    {
        std::cout << "Entre com o valor por hora trabalhada ($00.00): ";
        std::cin >> valorHoraTrabalhada;

        if (horasTrabalhadas <= 40)
        {
            salario = horasTrabalhadas * valorHoraTrabalhada;
        }
        else
        {
            salario = valorHoraTrabalhada * 40;
            horasExtras = horasTrabalhadas - 40;
            valorHoraExtra = valorHoraTrabalhada + (valorHoraTrabalhada * gratificação);
            valorAdicional = horasExtras * valorHoraExtra;
            salario += valorAdicional;
        }

        // imprime o valor do slário bruto
        std::cout << "Salario: $" << std::setprecision(2) << std::fixed << salario << '\n';

        // solicita a quantidade de horas extras
        std::cout << "\nEntre com as horas trabalhadas (-1 para terminar): ";
        std::cin >> horasTrabalhadas;
    }

    return 0;
} // fim de main