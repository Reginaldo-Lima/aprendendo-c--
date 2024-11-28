// Principal Versão 1.0.2: main_v1_0_2.cpp
// Define a classe GradeBook que contém um membre de dados courseName
// e funções-membro para configurar e obter seu valor;
// Cria e manipula um objeto GradeBook com essas funções.
// 25/11/2024 por Reginaldo Moura
// Referencia: figura 3.5 do livro "C++ Como Programar.

#include <iostream>
#include <string> // o programa utiliza classe de string padrão C++
using namespace std;

//Definição da classe GradeBook
class GradeBook
{
public:
    // função que configura o nome do curso
    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    } // fim da função setCourseName

    // funçãço que obtém o nome do curso
    string getCourseName()
    {
        return courseName;
    } // fim da função getCourseName

    // função que exibe uma mensagem de boas-vindas
    void displayMessage()
    {
        // essa instrução chama getCourseName para obter
        // nome do curso que esse GradeBook representa
        cout << "Welcome to the GradeBook for\n" << getCourseName()<< "!"
        << endl;
    }// fim da função displayMessage
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main()
{
    string nameOfCourse; //strings de caracteres para armazenar o nome do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

    // exibe valor inicial de courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName()
         << endl;

    // solicita, insere e configura o nome do curso
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // lê o nome de um curso com espaços em branco
    myGradeBook.setCourseName( nameOfCourse ); // configura o nome do curso
    
    cout << endl;

    // chama a função diplayMessage de myGradeBook
    myGradeBook.displayMessage();

    return 0;
}// fim de main