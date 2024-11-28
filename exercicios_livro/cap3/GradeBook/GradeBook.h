// Classe GradeBook: GradeBook.h
// Definição da classe GradeBook. Esse arquivo apresenta a interface pública de
// GradeBook sem revelar as implementações de funções-membro de GradeBook
// que são definidas em GradeBook.cpp
// 27/11/2024 por Reginaldo Moura
// Referência figura 3.11 do livro "C++ como programar" e questão 3.11 da lista de exercícios do capitulo

#include <string> // a classe GradeBook utiliza a classe string padrão C++
using std::string;

//definição da classe GradeBook
class GradeBook
{
public:
    GradeBook( string nameCourse, string nomeInstrutor ); // construtor que inicializa courseName
    void setCourseName( string ); //função que configura o nome do curso
    string getCourseName(); //função que obtém o nome do curso
    void setNomeInstrutor( string); // função que configura o nome do instutor
    string getNomeInstrutor(); // função que obtém o nome do instrutor
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
    string nomeInstrutor; // nome do instrutor desse curso
}; // fim da classe GradeBook