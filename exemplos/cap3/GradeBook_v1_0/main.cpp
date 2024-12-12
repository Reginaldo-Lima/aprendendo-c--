// Main: main.cpp
// Inclluindo a classe GradeBook a partir do arquivo GradeBook.h para uso em main.
// 25/11/2024 por Reginaldo Moura
// Referência figura 3.10 do livro "C++ como programar"

#include <iostream>
using namespace std;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
    //cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // exibe valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
    
    return 0;
} // fim de main