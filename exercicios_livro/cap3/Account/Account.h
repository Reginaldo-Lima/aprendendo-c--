// Classe Account: Account.h
// Definição da classe Account com suas funções-membro e membro de dados.
// A implementação da classe ocorre no arquivo Account.cpp
// 27/11/2024 por Reginaldo Moura
// Resolução do item 3.12 da lista de Exercícios do cap. 3 do livro "C++ Como Programar"

#include <string>
using std::string;

class Account
{
public:
    Account(int); // o construtor recebe o valor inicial de saldo e o configura no saldo
    void setBalance(int); // valida e configura o valor de saldo
    int getBalance(); // obtem o valor de saldo
    void credit(int); // credita um valor ao saldo
    void debit(int); // verifica e debita um valor de saldo
private:
    int balance; // saldo deste objeto Account
};