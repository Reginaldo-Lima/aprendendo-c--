//Compara dois números: compara_numero.cpp
//solicita ao usuário dois numeros e compara esses valores
//23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){

    //declaração das variáveis
    int num1;
    int num2;

    cout << "Informe dois valores: \n";
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << "Estes numeros sao iguais.\n";
    else if (num1 >= num2)
        cout << num1 << " eh o maior.\n";
    else
        cout << num2 << " eh o amior.\n";
    
    system("pause");
    return 0;
}
