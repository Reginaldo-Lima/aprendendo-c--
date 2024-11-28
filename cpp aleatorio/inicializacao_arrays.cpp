//Inicialização de Arrays: inicializacao_arrays.cpp
//Um programa simples de como inicializar Arrays
// 23/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

int main() {

    int nums[3]; //declaração de um array do tipo int, de nome nums, com 3 elementos
    //atribuição de valores a cada elemento do array, que é indicado por um índice [x].
    nums[0] = 100;
    nums[1] = 110;
    nums[2] = 120;

    int nums2[] = {1, 2, 3, 5, 7, 11, 13, 17}; //declaração de um array do tipo int, de nome nums2 e com seus elementos já inicializados

    cout << nums2[0] << endl;
    cout << nums2[1] << endl;
    cout << nums2[2] << endl;
    cout << nums2[3] << endl;
    cout << nums2[4] << endl;

    system("pause");
    return 0;
}