//Percorrendo Array: percorrendo_array.cpp
//programa demostrando como percorrer os elementos de um array
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main() {

    double preco[10] = {}; //atribuindo um conjunto vazio ao array para evitar sujeira nas posições dos elementos

    preco[0] = 14.55;
    preco[2] = 9.68;
    preco[3] = 1.1;
    preco[7] = 2;

    for (int i = 0; i <= 9; i++)
    {
        cout << preco[i] << endl;
    }
    

    system("pause");
    return 0;
}//fim main