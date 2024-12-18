//Função Matricial: funcao_matricial.cpp
//Programa que demonstra como utilizar laços aninhados para resolver
//uma função matricial
//24/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main()
{

    //  f(x,y) = (3 * (x + 1) + (y * y));
    //  (0 <= x <= 9) e (0 <= y <= 9)

    int planilha[10][10] = {};

    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            planilha[x][y] = (3 * (x + 1) + (y * y));

            string end = (y < 9) ? ", " : "\n";
            cout << planilha[x][y] << end;
        }
    }

    cout << planilha[5][5] << endl;

    system("pause");
    return 0;
}//fim main