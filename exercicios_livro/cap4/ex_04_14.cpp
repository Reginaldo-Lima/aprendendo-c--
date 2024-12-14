// Exercício 04.14: ex_04_14.cpp
// Determina se o cliente excedeu o limite de crédito
// 14/12/2024 por Reginaldo Moura
// Resolução da lista de exercício do capitulo 4, item 4.14

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    // declaração das variáveis
    int conta; // numero da conta
    double saldoInicial; // saldo do cartão no começo do mês
    double taxas; // total das compras no mês
    double creditos; // valores pagos
    double saldo; // valor atualizado do saldo
    double limiteDeCredito; // limite de crédito da conta

    // entrada das informações
    std::cout << "Entre com o numero da conta (-1 para terminar): ";
    std::cin >> conta;

    while (conta != -1)
    {
        std::cout << "Entre com o saldo inicial: ";
        std::cin >> saldoInicial;

        std::cout << "Entre com o total de taxas: ";
        std::cin >> taxas;

        std::cout << "Entre com o total de creditos: ";
        std::cin >> creditos;
                
        std::cout << "Entre com o limite de credito: ";
        std::cin >> limiteDeCredito;
        
        //atualiza o saldo e exibe
        saldo = (saldoInicial + taxas - creditos);
        std::cout << "Novo saldo: " << std::setprecision(2) << std::fixed << saldo;

        //verifica se o limite de c´redito foi ultrapassado
        if (saldo > limiteDeCredito)
        {
            std::cout << "\nConta: " << conta;
            std::cout << "\nLimite de credito: " << std::setprecision(2) << std::fixed << limiteDeCredito;
            std::cout << "\nSaldo: " << std::setprecision(2) << std::fixed << saldo;
            std::cout << "\nLimite de credito ultrapassado";
        } // fim de IF

        std::cout << '\n'; // exibe uma quebra de linha
        std::cout << "\nEntre com o numero da conta (-1 para terminar): ";
        std::cin >> conta;

    } // fim do while
    
    return 0;
} // fim de main