//Continue: continue.cpp
//um programa simples que mostra na prática a utilização da instrução continue
//Feito por Reginaldo Moura em 23/11/2024

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n = 0;
    while (true)
    {
        n++;

        if (n >= 10)
            break;
        else
            if (n == 4 or n == 6)
                continue;
                
        cout << n << endl;
    }
    

    system("pause");
    return 0;
}//fim main