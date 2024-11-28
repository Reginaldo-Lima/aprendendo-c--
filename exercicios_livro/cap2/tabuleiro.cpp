//Tabuleiro: tabuleiro.cpp
//Programa que exibe um tabuleiro na tela de duas manieras diferentes
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){

    //Exibe o tabuleiro com 8 instruções:
    cout << "* * * * * * * \n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * * \n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * * \n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * * \n";
    cout << " * * * * * * *\n";
    
    cout << endl;

    //Exibe o tabuleiro com o mínimo possível de instruções:
    cout << "* * * * * * * \n * * * * * * *\n* * * * * * * \n * * * * * * *\n* * * * * * * \n * * * * * * *\n* * * * * * * \n * * * * * * *\n";

    system("pause");
    return 0;
}