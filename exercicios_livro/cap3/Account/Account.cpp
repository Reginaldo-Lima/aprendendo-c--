// Implementação Account: Account.cpp
// Implementção das funções-membro da classe Account.
// 27/11/2024 por Reginaldo Moura
// resolção da questão 3.12 da lista de exercícios do cap. 3 do livro "C++ Como Programar"

#include <iostream>
using namespace std;

#include "Account.h" // iclui a definição de classe Account

// o construtor recebe o valor inicial de saldo e o atribui
Account::Account(int valor)
{
    setBalance(valor);
} // fim do construtor Account

// valida e configura o valor de saldo
void Account::setBalance(int valor)
{
    valor;
    if(valor >= 0) // verifica se o valor inicial informado para saldo é valido
        balance= valor; // configura o valor de saldo para o valor informado
    else
    {
        balance = 0;
        // exibe uma messagem informando o erro.
        cout << "\nO valor informado para o saldo eh invalido." << endl;
    }
} // fim da função setBalance

// obtém o valor de saldo
int Account::getBalance()
{
    return balance;
} // fim da função getBalance

// adiciona o valor creditado ao saldo
void Account::credit( int valor )
{
    int credito = getBalance() + valor;

    setBalance( credito );
} // fim da função credit

// função que verifica e debita um valor do saldo
void Account::debit( int valor)
{
    int debito = getBalance() - valor;
    if(valor <= getBalance())
        setBalance( debito );
    else
        cout << "\nDebit amount exceeded account balance." << endl;
} // fim da função debit