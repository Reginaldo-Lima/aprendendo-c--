/*
    21/11/2024 por Reginaldo Moura
    Escreva um programa que recebe o ano corrente e a idade so usuario
    e informa o ano de nascimento
*/

#include <iostream>

using namespace std;

int main(int argv, char* argc[]){

    int anoAtual = 0;
    int idade = 0;

    cout << "Informe o ano corrente: ";
    cin >> anoAtual;
    cout << "informe a sua idade: ";
    cin >> idade;

    int anoNascimento = anoAtual - idade;

    cout << "O seu ano de nascimento eh: " << anoNascimento << endl;
    
    system("pause");
    return 0;
}