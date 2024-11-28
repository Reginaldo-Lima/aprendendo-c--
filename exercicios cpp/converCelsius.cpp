/*
    21/11/2024 por Reginaldo Moura
    Crie um programa que receba a temperatura em Fahrenheit e converta para Celsius
*/

#include <iostream>

using namespace std;

int main(int argv, char* argc[]){

    cout << "Informe a temperatura em graus Fahrenheit: ";
    float f = 0;
    cin >> f;

    float c = (5.0/9.0) * (f - 32);

    cout << "A temperatura eh equivalente a: " << c << " C." << endl;

    system("pause");
    return 0;
}