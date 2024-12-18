// GradeBook: GradeBook.cpp
// Defineções de função-membro de GradeBook. Esse arquivo contém
// implementações das funções-membro prototipadas em GradeBook.h.
// 25/11/2024 por Reginaldo Moura
// Referência figura 3.12 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

// o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name)
{
    setCourseName(name); // chama a função set para inicializar courseName
} // fim do construtor GradeBook

// função para configurar o nome do curso
void GradeBook::setCourseName(string name)
{
    courseName = name; //armazena o nome do curso no objeto
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