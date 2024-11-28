// Manipulando Array Bidimensional: manip_array_bidimen.cpp
//Programa para demonstrar como manipular arrays com duas dimensões
// 24/11/2023 por Reginaldo Moura

#include <iostream>

using namespace std;

int main()
{

    int tabela[2][2]; //array com duas dimensões (x e y) e dois elementos

    /* [linha][coluna] =
    [0][0] , [0][1]
    [1][0] , [1][1]
    */

    tabela[0][0] = 10;
    tabela[0][1] = 100;  // 10, 100
    tabela[1][0] = 20;   // 20, 111
    tabela[1][1] = 111;

    int tabela2[2][2] = { {10, 100},
                          {20, 111} };

    cout << "{{" << tabela2[0][0] << ", " <<  tabela2[0][1] << "}, {" <<
                    tabela2[1][0] << ", " <<  tabela2[1][1] << "}}" << endl;

    return 0;
}