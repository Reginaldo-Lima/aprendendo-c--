/*
    21/11/2024 por Reginaldo Moura
    Escreva um programa que recebe um valor do usuário 
    e calcula 12% desse total
*/

#include <iostream>

using namespace std;

int main(int argv, char* argc[]){

    int valor = 0;

    cout << "Informe o valor que deseja: ";
    cin >> valor;

    double dozePorcento = valor * 0.12;

cout << "12 porcento de " << valor << " eh = " << dozePorcento << endl;

    system("pause");
    return 0;
}