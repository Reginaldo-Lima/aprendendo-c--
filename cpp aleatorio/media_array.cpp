//Média com Array: media_array.cpp
//programa que recebe cinco valores e calcula a média aritimética utilizando array.
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main()
{

    double val[5];
    //1) entrada de valores (5 números)
    for (int i = 0; i <=4; i++)
    {
        cout << "Informe o " << i + 1 << " valor: " << endl;
        cin >> val[i];
    }
    
    double total = 0;
    //2) calcular a média
    for (int i2 = 0; i2 <= 4; i2++)
    {
        total += val[i2];
    }
    
    cout << fixed;
    cout << "A media eh: " << (total / 5) << endl;

    system("pause");
    return 0;
}//fim main