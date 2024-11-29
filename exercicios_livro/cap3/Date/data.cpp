// Data: data.cpp
// Programa que testa e demonstra as capacidades da classe Date
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.15 da lista de exercícios do cap. 03 do livro "C++ Como Programar"

#include <iostream>
using namespace std;

#include "Date.h" // inclui a definição da classe Date

int main()
{
    // declaração das variáveis para armazenar dia, mês e ano
    int dia = 0, mes = 0, ano = 0;

    // solicida a data ao ususário
    cout << "Informe o dia:\n";
    cin >> dia;
    cout << "Informe o mes:\n";
    cin >> mes;
    cout << "informe o ano:\n";
    cin >> ano;

    cout << endl; // pula uma linha

    // criação de um objeto Date
    Date data(dia, mes, ano);

    // exibe a data
    data.displayDate();

    return 0;
} // fim da função main