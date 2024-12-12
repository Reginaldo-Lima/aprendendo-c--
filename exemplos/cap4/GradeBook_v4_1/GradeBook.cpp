// GradeBook: GradeBook.cpp
// Defineções de função-membro para a classe GradeBook que resolve o
// programa de média da classe com repetição controlada por sentinela.
// 12/12/2024 por Reginaldo Moura
// Referência figura 4.13 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // assegura que o ponto de fração decimal seja exibido

#include <iomanip> // manipuladores de fluxo parametrizados
using std::setprecision; // configura a precião da saída numérica

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

// determina a média da classe com base nas notas inseridas pelo usuário
void GradeBook::determineClassAverage()
{
    int total; // soma das notas inseridas pelo usuário
    int gradeCounter; // número da nota a ser inserida a seguir
    int grade; // valor das notas inseridas pelo usuário
    double average; // número com ponto de fração decimal para a média

    // fase de inicializalção
    total = 0; // inicializa o total
    gradeCounter = 0; // inicializa o contador de loops

    // fase de processamento
    // solicita entrada e lê a nota do usuário
    cout << "Enter grade or -1 to quit: ";
    cin >> grade; // insere nota ou valor de sentinela

    // faz um loop até ler o valor de sentinela inserido pelo usuário
    while (grade != -1) // enquanto a nota não é -1
    {
        total = total + grade; // adiciona grade a total
        gradeCounter = gradeCounter + 1; // incrementa o contador

        // solicita entrada e lê a próxima nota fornecida pelo usuário
        cout << "Enter grade ou -1 to quit: " ;
        cin >> grade;
    } // fim do while

    // fase de término
    if (gradeCounter != 0)
    {
        average = static_cast< double >(total) / gradeCounter;
        
        // exibe o total e a média das notas
        cout << "\nTotal of all " << gradeCounter << " grades entered is "
             << total << endl;
        cout << "Class average is " << setprecision(2) << fixed << average << endl;
    } // fim do if
    else // nenhuma nota foi inserida, assim gera a mensagem apropriada
        cout << "No grades were entered" << endl;
} // fim da função determineClassAverage