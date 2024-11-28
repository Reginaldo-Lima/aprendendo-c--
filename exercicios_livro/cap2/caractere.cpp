//Caractere: caractere.cpp
//Programa que imprime o número inteiro equivalente de um caractere digitado no teclado
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout << "Digite um caractere: ";
    cin >> letra;

    cout << static_cast< int >(letra) << endl;
        
    system("pause");
    return 0;
}