// Exercício 4.26: ex_04_26.cpp
// Determina se um numero com cinco digítos é um palíndromo.
// 18/12/2024 por Reginaldo Moura
// Resolução do item 4.26 da lista de exercícios do capítulo 04 do livro "C++ Como Programar"


#include <iostream>

int main(int arg, char* argv[])
{
    // declaração das variáveis
    int numero, resto, digito1, digito2, digito3, digito4, digito5;

    // solicita um numero com 5 dígitos
    std::cout << "Informe um numero com cinco digitos: ";
    std::cin >> numero;
    
    // separando os digítos
    digito1 = numero / 10000;
    resto = numero % 10000;
    digito2 = resto / 1000;
    resto %= 1000;
    digito3 = resto / 100;
    resto %= 100;
    digito4 = resto / 10;
    digito5 = resto % 10;

    // determina se é palíndromo
    if (digito1 == digito5)
    {
        (digito2 == digito4) ?  std::cout << "\nO numero " << numero << " eh um palindromo\n" :
                                std::cout << "\nO numero " << numero << " nao eh um palindromo\n";
    }
    else
    {
        std::cout << "\nO numero " << numero << " nao eh um palindromo\n";
    }
    
    return 0;
} // fim de main