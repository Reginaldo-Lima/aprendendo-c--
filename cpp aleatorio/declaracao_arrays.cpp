//Declaração de Arrays: declaracao_arrays.cpp
//Um programa simples de como declarar Arrays
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main() {

    int nums[10]; //declaração de um array do tipo int, de nome nums e com 10 elementos

    //atribuição de valores a cada elemento do array, que é indicado por um índice [x].
    nums[0] = 100;
    nums[1] = 9;
    nums[2] = 99;
    nums[3] = 55;
    nums[4] = -1;
    nums[5] = 52;
    nums[6] = 10;
    nums[7] = 8;
    nums[8] = 65;
    nums[9] = 2;

    cout << nums[5] + nums[7] << endl;

    system("pause");
    return 0;
}