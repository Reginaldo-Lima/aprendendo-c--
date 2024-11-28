// Funcionários: funcionario.cpp
// Programa para testar a classe Employee
// 28/11/2024 por Reginaldo Moura
// resolução do item 3.15 da lista de exercícios do livro "C++ Como Programar"

#include <iostream>
using namespace std;

#include "Employee.h" // inclui a definição da classe Eployee

// função que define o salario anual
double salarioAnual(double salario)
{
    return salario * 12;
} // fim da função salarioAnual

// função que define o valor do aumento
double aumento(double salario, double taxa)
{
    return salario * taxa;
} // fim da função aumento

// a função main inicia e exetura o programa
int main()
{
    // cria dois objetos Employee
    Employee maria("Maria", "Silva", 4900);
    Employee jose("Jose", "Ferreira", 4500);

    // determina o salário anual
    double salarioAnualMaria = salarioAnual(maria.getSalario());
    double salarioAnualJose = salarioAnual(jose.getSalario()); 

    // exibe o valor do salário anual
    cout << "O salario anual de " << maria.getNome() << " " << maria.getSobrenome()
        << " eh de: " << salarioAnualMaria << endl;
    cout << "O salario anual de " << jose.getNome() << " " << jose.getSobrenome()
        << " eh de: " << salarioAnualJose << endl;

    // define um aumento de 10%
    double acrescimo = 0;

    acrescimo = aumento(maria.getSalario(), 0.1);
    maria.setSalario(acrescimo + maria.getSalario());

    acrescimo = aumento(jose.getSalario(), 0.1);
    jose.setSalario(acrescimo + jose.getSalario());

    // atualiza o salário anual
    salarioAnualMaria = salarioAnual(maria.getSalario());
    salarioAnualJose = salarioAnual(jose.getSalario()); 

    cout << "\nO novo salario anual de " << maria.getNome() << " " << maria.getSobrenome()
        << " eh de: " << salarioAnualMaria << endl;
    cout << "O novo salario anual de " << jose.getNome() << " " << jose.getSobrenome()
        << " eh de: " << salarioAnualJose << endl;

    return 0;
} // fim da função main
