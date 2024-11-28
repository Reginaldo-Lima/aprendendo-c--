// Implementação Employee: Employee.cpp
// Implementa as funções-membro da classe Employee
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.14 da lista de exercícios do cap. 03 do livro "C++ Como Programar"

#include <string>
using namespace std;

#include "Employee.h" // inclui a definição da classe Employee

// o construtor inicializa os membros de dados da classe
Employee::Employee(string nome, string sobrenome, double salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}// fim do construtor da classe Employee

// configura o nome desde Employee
void Employee::setNome(string name)
{
    nome = name;
} // fim da função setNome

// configura o sobrenome deste Employee
void Employee::setSobrenome(string sobrename)
{
    sobrenome = sobrename;
} // fim da função setSobrenome

// configura e valida o valor do salário
void Employee::setSalario(double valor)
{
    if (valor >= 0)
        salario = valor;
    else
        salario = 0;
} // fim da função setSalario

// obtem o nome
string Employee::getNome()
{
    return nome;
} // fim da função getNome

// obtém o sobrenome
string Employee::getSobrenome()
{
    return sobrenome;
} // fim da função getSobrenome

double Employee::getSalario()
{
    return salario;
}