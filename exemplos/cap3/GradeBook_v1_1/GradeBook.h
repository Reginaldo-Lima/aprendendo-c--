// GradeBook: GradeBook.h
// Definição da classe GradeBook. Esse arquivo apresenta a interfacie pública de
// GradeBook sem revelar as implementações de funções-membro de GradeBook
// que são definidas em GradeBook.cpp
// 25/11/2024 por Reginaldo Moura
// Referência figura 3.11 do livro "C++ como programar"

#include <string> // a classe GradeBook utiliza a classe de string padrão C++
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook(string); // construtor que inicializa courseName
    void setCourseName(string); // função que configura o nome do curso
    string getCourseName(); // função que obtem o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook