//Principal Versão 1.0.1: main_v1_0_1.cpp
//Define a classe GradeBook com uma função-membro que aceita um parâmetro;
//Cria um objeto GradeBook e chama sua função displayMessage.
//25/11/2024 por Reginaldo Moura
//Referencia: figura 3.3 do livro "C++ Como Programar.

#include <iostream>
#include <string> // o programa utiliza classe de string padrão C++
using namespace std;

//Definição da classe GradeBook
class GradeBook
{
public:
    // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage(string courseName)
    {
        cout << "Welcome to the GradeBook for\n" << courseName << "!"
        << endl;
    }// fim da função displayMessage
}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main()
{
    string nameOfCourse; //strings de caracteres para armazenar o nome do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

    // prompt para entrada do nome do curso
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // lê o nome de um curso com espaços em branco
    cout << endl;

    // chama a função diplayMessage de myGradeBook
    // e passa nameOfCourse como um argumento
    myGradeBook.displayMessage(nameOfCourse);

    return 0;
}// fim de main