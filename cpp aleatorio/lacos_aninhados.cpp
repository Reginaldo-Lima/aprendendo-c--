//Laços Aninhados: lacos_aninhados.cpp
//Programa para demonstrar os ciclos aninhados ou laços aninhados
// 24/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main()
{
    //exemplo de utilização
    int valores[5][5] = {};

    for(int x; x < 5; x++){
        for(int y; y < 5; y++){ // este laço FOR será exetutado 5x para cada 1x do FOR acima
            valores[x][y] = 9; //adiciona o valor nove em cada uma das posições do nosso array bidimensional
        }
    }

    system("pause");
    return 0;
}//fim main