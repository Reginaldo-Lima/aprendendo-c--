// Fatura: fatura.cpp
// Progarama que testa a classe Invoice
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.13 da lista de exercícios do livro "C++ Como Programar"

#include <iostream>
using namespace std;

#include "Invoice.h" // inclui a definição da classe Invoice

// a função main inicia e executa o programa
int main()
{
    Invoice fatura("01_A", "Teclado", 4, 53);

    cout << "Codigo: " << fatura.getIdentificador()
        << "\tNome do Produto: " << fatura.getDescrição()
        << "\nQuantidade: " << fatura.getQuantidade()
        << "\tValor unitario: " << fatura.getPreco()
        << "\nValor Total para esta fatura: " << fatura.getInvoiceAmount()
        << endl;
    return 0;
}