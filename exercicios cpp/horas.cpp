/*
    21/11/2024 por Reginaldo Moura
    Programa que recebe duas variáveis, horas e minutos,
    e converte para minutos e tambem para segundos
*/

#include <iostream>

using namespace std;

int main(int argv, char* argc[]){

    //declaração das variáveis
    int hora = 0;
    int minutos = 0;

    cout << "Informe o valor referente a horas: ";
    cin >> hora;
    cout << "Informe o valor referente aos minutos: ";
    cin >> minutos;

    int minutosHora = hora * 60;
    int minutosTotal = minutosHora + minutos;
    int segundos = minutosTotal * 60;

    cout << "Esses valores eh equivalente a " << minutosTotal << " minutos ou tambem a " << segundos << " segundos." << endl;

    system("pause");
    return 0;
}//fim main