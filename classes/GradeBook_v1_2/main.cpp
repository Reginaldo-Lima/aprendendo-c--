// Main: main.cpp
// Cria e manipula um objeto GradeBook; ilustra a validação.
// 26/11/2024 por Reginaldo Moura
// Referência figura 3.17 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // cria dois objetos GradeBook
    // nome inicial de curso de gradeBook1 é muito longo
    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    // exibe courseName de cada GradeBook
    cout << "gradeBook1 created for course: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: "
        << gradeBook2.getCourseName() << endl;

    // modifica courseName do gradeBook1 (com uma string de comprimento válido)
    gradeBook1.setCourseName( "CS101 C++ Programming" );

    // exibe courseName de cada GradeBook
    cout << "\ngradeBook1's course name is : "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's course name is : "
        << gradeBook2.getCourseName() << endl;

    return 0;
} // fim de main