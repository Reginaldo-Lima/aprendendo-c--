// GradeBook: GradeBook.cpp
// Defineções de função-membro para a classe GradeBook que resolve o
// programa de média da classe com repetição controlada por contador.
// 12/12/2024 por Reginaldo Moura
// Referência figura 4.9 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::cin;
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

    else // se o nome tiver mais de 25 caracteres
    {
        // configura courseName como os primeiros 25 caracteres do paramêtro name
        courseName = name.substr(0, 25); // inicia em 0, comprimento de 25

        cout << "Name \"" << name << "\" exceeds maximun lengh (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    } // fim do if..else
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

// determina a média da classe com base em 10 notas inseridas pelo usuário
void GradeBook::determineClassAverage()
{
    int total; // soma das notas inseridas pelo usuário
    int gradeCounter; // número da nota a ser inserida a seguir
    int grade; // valor das notas inseridas pelo usuário
    int average; // média das notas

    // fase de inicializalção
    total = 0; // inicializa o total
    gradeCounter = 1; // inicializa o contador de loops

    // fase de processamento
    while (gradeCounter <= 10) // faz 10 loops
    {
        cout << "Enter grade: " ; // solicita entrada
        cin >> grade;
        total = total + grade; // adidiona grade a total
        gradeCounter = gradeCounter + 1; // incrementa o contador por 1
    } // fim do while

    // fase de término
    average = total / 10; // divisão de inteiros produz um resultado inteiro

    // exibe o total e a média das notas
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
} // fim da função determineClassAverage