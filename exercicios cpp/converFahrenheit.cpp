/*
    21/11/2024 por Reginaldo Moura
    Crie um programa que receba a temperatura em Celsius e converta para Fahrenheit
*/

#include <iostream>

using namespace std;

int main(int argv, char* argc[]){

    cout << "Informe a temperatura em graus Celsius: ";
    float c = 0;
    cin >> c;

    float f = (9*c/5) + 32;

    cout << "A temperatura eh equivalente a: " << f << " F." << endl;

    system("pause");
    return 0;
}