#include <iostream>
using namespace std;

int main(){

    int a = 5 / 2;
    int num1, num2;
    num1 = 10;
    num2 = 3;

    int div = num1 / num2;
    int resto = num1 % num2;

    cout << "A divisao de num1 por num2 e igual a: " << div << endl;
    cout << "A divisao de num1 por num2 tem resto = " << resto << endl;

    system("pause");
    return 0;
}