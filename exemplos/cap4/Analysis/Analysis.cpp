// Classe Analysis: Analysis.h
// Definiçôes de função-membro para a classe Analysis que
// analisa os resultados do teste.
// 12/12/2024 por Reginaldo Moura
// Referência figura 4.17 do livro "C++ como programar"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// inclui a definição de classe Analysis a partir de Analysis.h
#include "Analysis.h"

// processa os resultados do teste de 10 alunos
void Analysis::processExamResults()
{
    //inicializando variáveis nas declarações
    int passes = 0; // número de aprovações
    int failures = 0; // número de reprovações
    int studentCounter = 1; // contador de alunos
    int result = 0; // o resultado de um teste (1 = aprovado, 2 = reprovado)

    // processa 10 alunos utilizando o loop controlado por contador
    while ( studentCounter <= 10 )
    {
        // solicita ao usuário uma entrada e obtém o valor forneciso pelo usuário
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result; // lê o resulltado

        // if...else aninhado em while
        if (result == 1)
            passes = passes + 1;
        else
            failures = failures + 1;
        
        // incrementa studentCounter até o loop terminar
        studentCounter = studentCounter + 1;
    } // fim do while

    // fase de terminação; exibe o número de aprovados e reprovados
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    // determina se mais de 8 alunos passaram
    if (passes > 8)
        cout << "Raise tuition" << endl;
} // fim da função processExamResults