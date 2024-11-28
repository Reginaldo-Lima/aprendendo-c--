// Implementação de GradeBook: GradeBook.cpp
// Definições de função-membro de GradeBook. Esse arquivo comtém
// implementações das funções-membro prototipadas em GradeBook.h
// 27/11/2024 por Reginaldo Moura
// Referência figura 3.12 do livro "C++ como programar" e questão 3.11 da lista de exercícios do capitulo.

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook( string nameCourse, string nomeInstrutor )
{
    setCourseName( nameCourse ); // chama a função set para inicializar courseName
    setNomeInstrutor( nomeInstrutor );
} // fim do construtor GradeBook

// função para configurar o nome do curso
void GradeBook::setCourseName( string name )
{
    courseName = name; // armazena o nome do curso no objeto
} // fim da função setCourseName

void GradeBook::setNomeInstrutor( string name )
{
    nomeInstrutor = name; // armazena o nome do instrutor no objeto
} // fim da função setNomeInstrutor

// função para obter o nome do curso
string GradeBook::getCourseName()
{
    return courseName; // retorna courseName do objeto
} // fim da função getCourseName

// função para obter o nome do instrutor
string GradeBook::getNomeInstrutor()
{
    return nomeInstrutor; // retorna o nomeInstrutor do objeto
}

// exibe uma mensagem de boas-vindas para o usuário GradeBook
void GradeBook::displayMessage()
{
    // chama getCourseName para obter courseName
    // chama getNomeInstrutor para obter nomeInstrutor
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
         << "\nThis course is presented by: " << getNomeInstrutor()
         << endl;
} // fim da função displayMessage