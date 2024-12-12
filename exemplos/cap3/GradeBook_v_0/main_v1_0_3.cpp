// Principal Versão 1.0.3: main_v1_0_3.cpp
// Instanciando múltiplos objetos da classe GradeBook e utilizando
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook é criado
// 25/11/2024 por Reginaldo Moura
// Referencia: figura 3.7 do livro "C++ Como Programar.

#include <iostream>
#include <string> // o programa utiliza classe de string padrão C++
using namespace std;

//Definição da classe GradeBook
class GradeBook
{
public:
    // o construtor inicializa courseName com a string fornecida como argumento
    GradeBook(string name)
    {
        setCourseName(name); // chama a função set para inicializar courseName
    }// sim do construtor GradeBook

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
    // cria dois objetos GradeBook
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );

    // exibe valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;

    return 0;
}// fim de main