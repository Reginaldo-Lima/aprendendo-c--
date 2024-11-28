/*
    21/11/2024 por Reginaldo Moura
    Escreva um programa que pede o raio de um círculo.
    e em seguida exiba o perímetro e a área do círculo.
*/

#include <iostream>

using namespace std;

int main(int argv, char *argc[]){

    const double pi = 3.1415; //valor de pi

    //declaração das variáveis
    double raio, perimetro, area = 0;

    cout << "informe o raio da circunferencia >>" << endl; //solicita ao usuario o raio
    cin >> raio; //armazena o valor na variavel raio

    perimetro = 2 * pi * raio;
    area = pi * (raio * raio);

    cout << "O perimetro do circulo eh: " << perimetro << endl;
    cout << "A area do circulo eh: " << area << endl;

    system("pause");
    return 0;
}//fim main