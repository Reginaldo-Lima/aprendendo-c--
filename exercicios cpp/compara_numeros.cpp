//Compara 2 números: compara_numeros.cpp
//Receber dois números, onde o primeiro deve ser menor que o segundo
//Em seguida, ele cálcula a porcentagem que o primeiro representa do segundo
//22/11/2024 11:48 por Reginaldo Moura

#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;

    std::cout << "Informe um numero: ";
    std::cin >> num1;

    std::cout << "Informe um segundo numero, que seja maior que o primeiro: ";
    std::cin >> num2;

    if (num1 <= num2)
    {
        float resultado = (num1 * 100.0) / num2;

        std::cout << num1 << " representa " << resultado << " porcentos de " << num2 << std::endl;
    } else
    {
        std::cout << "Voce nao digitou um numero maior que o primeiro valor\n";
    }
    
    system("pause");
    return 0;
}