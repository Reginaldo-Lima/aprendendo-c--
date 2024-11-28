//
// Created by Reginaldo on 19/11/2024.
//
#include <iostream>
using namespace std;

int main(){

  cout << "Digite um numero no intervalo de 45 ate 75" << endl;
  int i = 0;
  cin >> i;

  if (i >= 45 && i <= 75) {
    cout << "Obigado por informar o numero no intervalo solicitado" << endl;

    if(i == 45 || i == 75)
      cout << "O valor digitado eh igual a algum dos extremos" << endl;
  }else
    cout << "O numero nao esta no intervalo solicitado." << endl;

  system("pause");
  return 0;
}