/*
    21/11/2024 por Reginaldo Moura
    Escreva um programa que recebe o valor do raio de uma esfera,
    e calcula seu volume.
*/

#include <iostream>

using namespace std;

int main(){
    const double pi = 3.1415; //valor de pi
    //declaração das variáveis
    double raio, volume = 0;

    //Solicita o raio ao usuário
    cout << "Informe o raio da esfera: ";
    cin >> raio; //armazena o valor na variavel raio

    volume = (4.0/3) * pi * raio * raio * raio;

    cout << "O valor do volume da esfera eh: " << volume << endl;

    system("pause");
    return 0;
}//fim main