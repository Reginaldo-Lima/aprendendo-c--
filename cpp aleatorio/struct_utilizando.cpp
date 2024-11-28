//Utilizando Struct: struct_utilizando.cpp
//programa que mostra como declarar e como fazer operações com
//os membros das estruturas
//24/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

struct Janela
{
    string titulo;
    int left;
    int top;
}; //fim struct Janela


int main()
{

    Janela j1;
    j1.titulo = "Windows";
    j1.left = 0;
    j1.top = 0;

    Janela j2;
    j2.titulo = "Linux";
    j2.left = 250;
    j2.top = 250;

    cout << "A soma eh igua: " << j2.left + j2.top << endl;

    cout << "O titulo eh: " << j1.titulo
         << "\nLeft: " << j1.left
         << "\nTop: " << j1.top << endl;
    
    cout << "O titulo eh: " << j2.titulo
         << "\nLeft: " << j2.left
         << "\nTop: " << j2.top << endl;

    system("pause");
    return 0;
}//fim main