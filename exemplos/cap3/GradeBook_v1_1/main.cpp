// Main: main.cpp
// Demonstração de classe GradeBook depois de separar
// sua interface de sua implementação
// 25/11/2024 por Reginaldo Moura
// Referência figura 3.13 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // exibe valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
    
    return 0;
} // fim de main