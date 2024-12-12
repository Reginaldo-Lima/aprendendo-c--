/*
Programa Simples: simples.cpp
Programa para demonstrar a utilização de pré-incremento e pós-incremento
12/12/2024 por Reginaldo Moura
Referência figura 4.21 do livro "C++ Como Programar"
*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int c;

    // demonstra pós-incremento
    c = 5;                  // atribui 5 à variável c
    cout << c << endl;      // imprime 5
    cout << c++ << endl;    // imprime 5 então pós-incrementa
    cout << c << endl;      // imprime 6

    cout << endl;

    //demonstra pré-incremento
    c = 5;                  // atribui 5 à variável c
    cout << c << endl;      // imprime 5
    cout << ++c << endl;    // pré-incrementa e então imprime 6
    cout << c << endl;      // imprime 6

    return 0;
} // fim de main