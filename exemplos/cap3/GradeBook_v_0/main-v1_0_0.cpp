//Principal Versão 1.0.0: main-v1_0_0.cpp
//Define a classe GradeBook com uma função-membro displayMessage;
//Cria um objeto GradeBook e chama sua função displayMessage.
//25/11/2024 por Reginaldo Moura
//Referencia: figura 3.1 do livro "C++ Como Programar.

#include <iostream>
using namespace std;

//Definição da classe GradeBook
class GradeBook
{
public:
    // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage()
    {
        cout << "Welcome to the GradeBook!" << endl;
    }// fim da função displayMessage
}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main()
{
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
    myGradeBook.displayMessage(); // chama a função diplayMessage do objeto

    return 0;
}// fim de main