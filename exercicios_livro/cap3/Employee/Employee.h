// Classe Employee: Employee.h
// Definição da classe Employee
// 28/11/2024 por Reginaldo Moura
// resolução do item 3.14 da lista de exercícios do cap. 03 do livro "C++ Como Programar"

#include <string>
using namespace std;

class Employee
{
public:
    Employee(string nome, string sobrenome, int salario); // o construtor inicializa os três membros da classe
    void setNome(string); // configura o nome
    string getNome(); // obtém o nome
    void setSobrenome(string);  // configura o sobrenome
    string getSobrenome(); // obtém o sobrenome
    void setSalario(double); // configura o salário
    int getSalario(); // obtém o salário
private:
    string nome; 
    string sobrenome;
    int salario;
}; // fim da classe Employee