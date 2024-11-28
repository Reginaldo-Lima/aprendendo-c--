//Módulo: modulo.cpp
//programa que recebe dois inteiros e determina e exibe se o primeiro é múltiplo do segundo
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cout << "Informe dois numeros inteiros: ";
    cin >> num1 >> num2;

    if ((num1 % num2) == 0)
        cout << num1 << " eh multiplo de " << num2 << endl;
    else
        cout << num1 << " nao eh multiplo de " << num2 << endl;

    system("pause");
    return 0;
}