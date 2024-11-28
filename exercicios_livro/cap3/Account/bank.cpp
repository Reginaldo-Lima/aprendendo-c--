// Banco: bank.cpp
// Programa que cria dois objetos Account e testa as suas classes
// 27/11/2024 por Reginaldo Moura
// resolução da questão 3.12 da lista de exercícios do cap. 3 do livro "C++ como programar"

#include <iostream>
using namespace std;

#include "Account.h" // inclui a definição da classe Account

// a função main inicia e executa o programa
int main()
{
    //cria dois objetos Account com um saldo inicial
    Account conta1( 352 );
    Account conta2( 65 );

    // exibe o saldo inicial das contas
    cout << "O saldo da conta1 eh: " << conta1.getBalance()
        << "\nO saldo da conta2 eh: " << conta2.getBalance()
        << endl;

    // debita um valor das contas
    conta1.debit( 35 );
    conta2.debit( 85 );

    // exibe o saldo atualizado
    cout << "\nO saldo atual da conta1 eh: " << conta1.getBalance()
        << "\nO saldo atual da conta2 eh: " << conta2.getBalance()
        << endl;

    // credita um valor as contas
    conta1.credit( 85 );
    conta2.credit( 158 );

    // exibe o saldo atualizado
    cout << "\nO saldo atual da conta1 eh: " << conta1.getBalance()
        << "\nO saldo atual da conta2 eh: " << conta2.getBalance()
        << endl;

    return 0;
}