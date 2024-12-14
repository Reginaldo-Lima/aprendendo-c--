// Exercício 4.8: ex_04_08.cpp
// Programa que calcula a potencia
// 12/12/2024 por Reginaldo Moura

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // declaração das variáveis
    int x; // valor para base
    int y; // valolr para potencia
    int i = 1; // variável contador
    int power = 1; // resultado da potência

    // entrada dos dados
    cout << "Informe um numero inteiro para base: ";
    cin >> x;
    cout << "\nInforme um numero inteiro para potencia: ";
    cin >> y;

    // fase de cálculo
    while (i <= y)
    {
        power *= x;
        i++;
    } // fim while

    // exibir resultados
    cout << "\nResultado: " << power << endl;

    return 0;
} // fim de main