// GradeBook: GradeBook.h
// Definição de classe GradeBook apresenta a interfacie públic da
// classe. Definições de função-membro aparecem em GradeBook.cpp.
// 26/11/2024 por Reginaldo Moura
// Referência figura 3.15 do livro "C++ como programar"

#include <string> // o programa utiliza a classe de string padrão C++
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook(string); // construtor que inicializa um objeto GradeBook
    void setCourseName(string); // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook