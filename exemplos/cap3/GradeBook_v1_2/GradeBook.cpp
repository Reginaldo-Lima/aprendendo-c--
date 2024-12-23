// GradeBook: GradeBook.cpp
// Defineções de função-membro de GradeBook. Esse arquivo contém
// implementações das funções-membro prototipadas em GradeBook.h.
// 26/11/2024 por Reginaldo Moura
// Referência figura 3.16 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name)
{
    setCourseName(name); // valida e armazena courseName 
} // fim do construtor GradeBook

// função que configura o nome do curso;
// assegura que o nome do curso tenha no máximo 25 caracteres
void GradeBook::setCourseName(string name)
{
    if ( name.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
        courseName = name; //armazena o nome do curso no objeto

    if ( name.length() > 25 ) // se o nome tiver mais de 25 caracteres
    {
        // configura courseName como os primeiros 25 caracteres do paramêtro name
        courseName = name.substr(0, 25); // inicia em 0, comprimento de 25

        cout << "Name \"" << name << "\" exceeds maximun lengh (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    } // fim do if
} // fim da função setCourseName

// função para obter o nome do curso
string GradeBook::getCourseName()
{
    return courseName; // retorna o courseName do objeto
} // fim da função getCourseName

// exibe uma mensagem de boas-vindas para o usuário GradeBook
void GradeBook::displayMessage()
{
    // chama getCourseName para obter o courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
} // fim da função displayMessage