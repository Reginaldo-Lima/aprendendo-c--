//Dígitos Individuais: digitos_individuais.cpp
//Program que insere um inteiro de cinco dígitos, separa o inteiro em seus dígitos individuais
//e imprime os dígitos separados entre si por três espaços cada.
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){

    int valor;
    int digito1, digito2, digito3, digito4, digito5; //digitos
    int resto; //variável para armazenar o módulo

    cout << "Digite um numero inteiro de 5 digitos: ";
    cin >> valor;

    digito1 = valor / 10000;
    resto = valor % 10000;

    digito2 = resto / 1000;
    resto %= 1000;

    digito3 = resto / 100;
    resto %= 100;

    digito4 = resto / 10;
    resto %= 10;

    digito5 = resto;

    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << endl;

    system("pause");
    return 0;
}//fim main