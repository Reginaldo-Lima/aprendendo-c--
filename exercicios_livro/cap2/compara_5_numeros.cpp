//Compara 5 numeros: compara_5_numero.cpp
//Um programa que lê cinco inteiros e determina e imprime o maior e o menor inteiro no grupo
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3, num4, num5;
    int maior = 0;
    int menor = 0;

    cout << "Informe cinco numeros inteiros: \n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5; //recebe e armazena os valores nas variáveis

    //compara o maior
    if (num1 > maior)
        maior = num1;
    if (num2 > maior)
        maior = num2;
    if (num3 > maior)
        maior = num3;
    if (num4 > maior)
        maior = num4;
    if ( num5 > maior)
        maior = num5;
    
    //compara o menor
    if (num1 <= maior) //para poder reatribuir um valor diferente de 0 e pertencente ao grupo a "menor"
        menor = num1;
    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;
    if (num4 < menor)
        menor = num4;
    if (num5 < menor)
        menor = num5;

    cout << "O maior eh: " << maior << endl;
    cout << "O menor eh: " << menor << endl;

    system("pause");
    return 0;
}//fim main