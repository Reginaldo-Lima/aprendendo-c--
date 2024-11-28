//Manipulando Planilhas: manip_planilhas.cpp
//Programa que demonstra como manipular planilhas no C++
//utilizando Arrays e Laços aninhados
// 24/11/2024 por Reginaldo Moura

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    //1) criar uma planilha com valores aleatórios
    //2) soma dos valores de cada linha
    //3) soma da soma dos valores de cada linha

    double plan[5][6] = {};

    //gerando a planilha
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            plan[x][y] = (double)rand() / RAND_MAX;
        }
    }

    //calculo dos valores
    double total = 0;
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            plan[x][5] += plan[x][y];
        }
        total += plan[x][5];
    }
    
    //imprimindo a planilha
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 6; y++){

            //0, 0, 0, 0, 0 = 0.0
            string end = (y < 4) ? ", ":
                         (y < 5) ? " = " : "\n";
            cout << plan[x][y] << end;
        }
    }

    cout << "O valor da soma eh: " << total << endl;

    system("pause");
    return 0;
}//fim main