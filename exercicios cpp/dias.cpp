/*
    21/11/2024 por Reginaldo Moura
    Um programa que recebe um valor em anos e converte esse valor para dias
    assumindo  que um ano tem 365 dias
*/

#include <iostream>

using namespace std;

int main(int argv, char* argc[]){

    int dias = 365;
    int ano = 0;
    int diasDecorrido = 0;
    //solicita ao usuario um valor em anos
    cout << "Informe o valor em anos que deseja converter em dias: ";
    cin >> ano;

    diasDecorrido = ano * dias;

    cout << "Os dias decorridos em " << ano << " anos, foi de " << diasDecorrido << " dias." << endl;

    system("pause");
    return 0;
}