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
    Employee maria("Maria", "Silva", 1680.4);
    Employee jose("Jose", "Ferreira", 1503);

    double salarioMaria = maria.getSalario();
    double salarioJose = jose.getSalario();

    // determina o salário anual
    double salarioAnualMaria = salarioMaria * 12;
    double salarioAnualJose = salarioJose * 12; 

    // exibe o valor do salário anual
    cout << "O salario anual de " << maria.getNome() << " " << maria.getSobrenome()
        << " eh de: " << salarioAnualMaria << endl;
    cout << "O salario anual de " << jose.getNome() << " " << jose.getSobrenome()
        << " eh de: " << salarioAnualJose << endl;

    // define um aumento de 10%
    double acrescimo = 10.0 / 100;
    double aumento = 0;

    aumento = salarioMaria * acrescimo;
    maria.setSalario(aumento + salarioMaria);

    aumento = salarioJose * acrescimo;
    jose.setSalario(aumento + salarioJose);

    // atualiza o salário anual
    salarioMaria = maria.getSalario();
    salarioJose = jose.getSalario();
    salarioAnualMaria = salarioMaria * 12;
    salarioAnualJose = salarioJose * 12; 

    cout << "\nO novo salario anual de " << maria.getNome() << " " << maria.getSobrenome()
        << " eh de: " << salarioAnualMaria << endl;
    cout << "O novo salario anual de " << jose.getNome() << " " << jose.getSobrenome()
        << " eh de: " << salarioAnualJose << endl;

    return 0;
} // fim da função main
