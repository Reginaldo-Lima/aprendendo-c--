// Classe Date: Date.cpp
// Implementação da das funções-membro da classe Date
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.15 da lista de exercícios do cap. 03 do livro "C++ Como Programar"

#include <iostream>
using namespace std;

#include "Date.h" // inclui a definição da classe Date

// o construtor inicializa os membros de dados
Date::Date(int dia, int mes, int ano)
{
    setDia(dia);
    setMes(mes);
    setAno(ano);
} // fim do construtor de Date

// configura o dia
void Date::setDia(int d)
{
    if (d > 0)
        dia = d;
    else
        dia = 1;
} // fim da função setDia

// configura o mês
void Date::setMes(int m)
{
    if ((m > 0) && (m <= 12))
        mes = m;
    else
        mes = 1;
} // fim da função setMes

// configura o ano
void Date::setAno(int a)
{
    if (a > 0)
        ano = a;
    else
        ano = 1;
} // fim da função setAno

// obtém o dia
int Date::getDia()
{
    return dia;
} // fim da função getDia

int Date::getMes()
{
    return mes;
} // fim da função getMes

int Date::getAno()
{
    return ano;
} // fim da função getAno

// exibe a data
void Date::displayDate()
{
    cout << "\n" << getDia() << "/"
        << getMes() << "/"
        << getAno() << endl;
} // fim da função displayDate