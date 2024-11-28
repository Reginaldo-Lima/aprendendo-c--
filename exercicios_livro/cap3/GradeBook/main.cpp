// Principal: main.cpp
// Demonstração de classe GradeBook depois de separar
// sua interface de sua implementação.
// 27/11/2024 por Reginaldo Moura
// Referência figura 3.13 do livro "C++ Como Programar" e questão 3.11 da lista de exercícios do capitulo

#include <iostream>
using namespace std;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Deitel e Deitel");
    GradeBook gradeBook2("CS102 Data Structures in C++", "Reginaldo Moura");

    // exibe o valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
    
    cout << endl;

    // eibe uma mensagem de boas-vindas
    gradeBook1.displayMessage();
    cout << endl;
    gradeBook2.displayMessage();
    return 0;
} // fim de main