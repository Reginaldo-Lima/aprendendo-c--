//Break: break.cpp
//um programa simples que mostra na prática a utilização da instrução break
//Feito por Reginaldo Moura em 23/11/2024

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n = 0;
    while (true)
    {
        n++;
        cout << n << endl;

        if (n >= 10)
            break;
    }
    

    system("pause");
    return 0;
}//fim main