//Calcula o diâmetro: calcula_diametro.cpp
//Programa que lê o raio como inteiro 
// e imprime o diâmetro, a circunferência e a área do círculo
//23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){

    const float pi = 3.14159; //constante pi

    //declaração das variáveis
    int raio;

    cout << "Informe o valor do raio, como um numero inteiro: ";
    cin >> raio;

    cout << "O diamentro eh:  " <<  2 * raio << endl;
    cout << "A circunferencia eh: "<< 2 * pi * raio << endl;
    cout << "A area eh: " << pi * raio * raio << endl;

    system("pause");
    return 0;
}//fim main