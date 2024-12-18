// Exercício 4.19: ex_04_19.cpp
// Determinar e imprimir os dois maiores números digitados dentre os 10 inseridos.
// 17/12/2024 por Reginaldo Moura
// Resolução do item 4.19 da lista dde exercícios do capítulo 04

#include <iostream>

int main()
{
    int number;
    int largest = 0;
    int secondLargest = 0;
    int counter = 1;

    while (counter <= 10)
    {
        std::cout << "Digite o numero " << counter << " ";
        std::cin >> number;
        counter++;

        if (largest == 0)
        {
            if (secondLargest == 0)
            {
                largest = number;
            }
        }
        else if (number > largest)
        {
            largest = number;
        }
        else if(number < largest)
        {
            if (number > secondLargest)
                secondLargest = number;
        }
        
    }

    std::cout << "\nO maior numero eh: " << largest;
    std::cout << "\nO segundo maior eh: " << secondLargest;

    return 0;
}