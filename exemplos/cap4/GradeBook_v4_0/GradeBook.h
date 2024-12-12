// GradeBook: GradeBook.h
// Definição de classe GradeBook que determina a média de uma classe.
// As funções-membro são definidas no GradeBook.cpp.
// 12/12/2024 por Reginaldo Moura
// Referência figura 4.8 do livro "C++ como programar"

#include <string> // o programa utiliza a classe de string padrão C++
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook(string); // construtor que inicializa o nome do curso
    void setCourseName(string); // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
    void determineClassAverage(); // calcula a média das notas inseridas pelo usuário
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook