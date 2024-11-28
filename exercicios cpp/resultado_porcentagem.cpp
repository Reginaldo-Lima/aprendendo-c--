//Resultado da porcentagem: resultado_porcentagem.cpp
//Receber um valor de porcentagem do usuario,
//e calcula quanto isso representa de um segundo valor que ele digitou
//22/11/2024 11:28 por Reginaldo Moura

#include <iostream>

int main()
{
    //declaração das variáveis valores
    int valor1 = 0;
    int valor2 = 0;

    std::cout << "Informe o valor da porcentagem que deseja: "; //solicita ao usuário um valor
    std::cin >> valor1; //armazena esse valor

    std::cout << "Informe o valor qual deseja calcular a porcentagem: "; //solicita outro valor
    std::cin >> valor2; //armazena esse valor

    float porcentagem = (valor1 / 100.0); //declaração da porcentagem; transformação do valor 1 dividido por 100
    float resultado = (valor2 * porcentagem); //declaração do resuldato; produdo do valor 2 pela porcentagem

    std::cout << "O resultado de " << valor1 << " porcentos de " << valor2 << " eh = " << resultado << std::endl;

    system("pause");
    return 0;
}//fim main