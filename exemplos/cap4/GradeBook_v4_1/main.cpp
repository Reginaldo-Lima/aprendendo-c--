// Main: main.cpp
// Cria o objeto da calsse GradeBook e invoca sua função determineClassAverage
// 12/12/2024 por Reginaldo Moura
// Referência figura 4.10 e figura 4.14 do livro "C++ como programar"

#include "GradeBook.h" // inclui a definição de classe GradeBook

int main()
{
    // cria o objeto myGradeBook da classe GradeBook e
    // passa o nome do curso para o construtor
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage(); // exibe a mensagem de boas vindas
    myGradeBook.determineClassAverage(); // calcula a média das 10 notas
    
    return 0;
} // fim de main