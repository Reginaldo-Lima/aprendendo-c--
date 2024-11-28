//Ímpar ou par: impar_ou_par.cpp
//programa que recebe um inteiro e determina se ele é ímpar ou par
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Informe um numero inteiro: ";
    cin >> num;

    if ((num % 2) == 0)
        cout << num << " eh par\n";
    else
        cout << num << "eh impar\n";

    system("pause");
    return 0;
}//fim main