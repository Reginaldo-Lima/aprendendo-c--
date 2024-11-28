//Três números: tres_numeros.cpp
//um programa que recebe três valores inteiros
//e imprime a soma, produto, a média, o menor e o maior desses números.
//23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main(){
    //Declaração das variáveis
    int num1, num2, num3; //valores
    int soma, produto; //operações
    float media; //media com ponto flutuante
    int maior, menor; //maior ou menor

    cout << "Informe tres numeros inteiros:\n";
    cin >> num1 >> num2 >> num3;

    soma = num1 + num2 + num3;
    produto = num1 * num2 * num3;
    media = soma / 3.0;

    //compara o maior
    if ((num1 > num2) && (num1 > num3))
        maior = num1;
    
    else if ((num2 > num1) && (num2 > num3))
        maior = num2;
    else
        maior = num3;
    
    //compara o menor
    if ((num1 < num2) && (num1 < num3))
        menor = num1;
    
    else if ((num2 < num1) && (num2 < num3))
        menor = num2;
    else
        menor = num3;

    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Produto: " << produto << endl;
    cout << "O maior: " << maior << endl;
    cout << "O menor: " << menor << endl;

    system("pause");
    return 0;
}//fim main