// Funcionários: funcionario.cpp
// Programa para testar a classe Employee
// 28/11/2024 por Reginaldo Moura
// resolução do item 3.15 da lista de exercícios do livro "C++ Como Programar"

#include <iostream>
using namespace std;

#include "Employee.h" // inclui a definição da classe Eployee

// a função main inicia e exetura o programa
int main()
{
    // cria dois objetos Employee
    Employee maria("Maria", "Silva", 1680);
    Employee jose("Jose", "Ferreira", 1503);

    // exibe o valor do salário anual
    cout << "O salario anual de " << maria.getNome() << " " << maria.getSobrenome()
        << " eh de: " << maria.getSalario() * 12 << endl;
    cout << "O salario anual de " << jose.getNome() << " " << jose.getSobrenome()
        << " eh de: " << jose.getSalario() * 12 << endl;

    // define um aumento de 10%
    int taxa = 10;
    int acrescimo = 0;
    int novoSalario = 0;

    acrescimo = (maria.getSalario() * taxa) / 100;
    novoSalario = maria.getSalario() + acrescimo;
    maria.setSalario(novoSalario);

    acrescimo = (jose.getSalario() * taxa) / 100;
    novoSalario = jose.getSalario() + acrescimo;
    jose.setSalario(novoSalario);


    cout << "\nO novo salario anual de " << maria.getNome() << " " << maria.getSobrenome()
        << " eh de: " << maria.getSalario() * 12 << endl;
    cout << "O novo salario anual de " << jose.getNome() << " " << jose.getSobrenome()
        << " eh de: " << jose.getSalario() * 12 << endl;

    return 0;
} // fim da função main
