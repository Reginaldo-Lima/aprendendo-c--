//Cálculos: calculos.cpp
//Um programa que solicita dois valores do usuário
//e imprime a soma, produto, diferença e quociente dos dois valores
//23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main()
{
    //Declaração das variáveis
    int valor1 = 0;
    int valor2 = 0;
    int soma, produto, diferenca, quociente;

    cout << "Informe dois valores: \n";
    cin >> valor1 >> valor2; //armazena os valores informados pelo usuário

    //cálculos
    soma = valor1 + valor2;
    produto = valor1 * valor2;
    diferenca = valor1 - valor2;
    quociente = valor1 / valor2;

    //exibe os resultados na tela
    cout << "A soma de " << valor1 << " + " << valor2 << " = " << soma << endl;
    cout << "O produto de " << valor1 << " * " << valor2 << " = " << produto << endl;
    cout << "A diferenca de " << valor1 << " - " << valor2 << " = " << diferenca << endl;
    cout << "O quociente de " << valor1 << " / " << valor2 << " = " << quociente << endl;

    system("pause");
    return 0;
}//fim main