//Struct: struct.cpp
//Programa que demonstra como declarar estruturas utilizando o struct
//24/11/2024 por Reginaldo Moura

#include <iostream>

using namespace std;

struct Pessoa
{
    string nome;
    string sobrenome;
    int idade;
    string cpf;
}; //fim da struct pessoa


int main()
{

    Pessoa p, p2;

    p.nome = "Fulano";
    p.idade = 25;
    p.cpf = "123.456.789-00";

    p2.nome = "Ciclano";
    p2.idade = 30;

    system("pause");
    return 0;
}//fim main