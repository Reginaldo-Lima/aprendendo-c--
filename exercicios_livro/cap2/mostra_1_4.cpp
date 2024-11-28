//Mostra de 1 a 4: mostra_1_4.cpp
//Programa que exibe na tela os números de 1 a 4
//de três maneiras diferentes
//23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main() {

    cout << "1 2 3 4\n"; //utilizando apenas uma instrução e um operador de inserção
    cout << "1 " << "2 " << "3 " << "4\n"; //utilizando quatro operadores de inserção
    //utilizando 4 instruções
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";

    system("pause");
    return 0;
}