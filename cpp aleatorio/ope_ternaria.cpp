//Operação Ternária: ope_ternaria.cpp
//Um programa simples que mostra a utilização de uma condição ternária
// Reginaldo Moura 22/11/2024 18:37

#include <iostream>

using namespace std;

int main()
{

    cout << "Digite um numero: " << std::endl;
    int i = 0;
    cin >> i;

    string texto = (i <= 10) ? "menor do que 10" : "maior do que 10";

    cout << "O valor digitado anteriormente eh: " << texto << endl;

    system("pause");
    return 0;
}