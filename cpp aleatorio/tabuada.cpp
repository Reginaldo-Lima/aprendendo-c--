#include <iostream>

using namespace std;

int main(){

    //1)    perguntar qual a tabuada para o usuario
    //      e armazenar o valooor numa variável
    cout << "Por favor, informe a tabuada que voce deseja: " << endl;
    int n = 0;
    cin >> n;

    //2) implementação de um laço de repetição FOR
    for (int i = 1; i <= 10; i++)
    {
        //3)    Imprimir a tabuada na tela
        cout << i << " x " << n << " = " << i * n << endl;
    }
    
    system("pause");
    return 0;
}// final main