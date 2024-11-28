#include <iostream>
#include <stdlib.h>

int main(){

    char c;
    std::cout << "Por favor, digite uma letra entre a ateh f" << std::endl;
    std::cin >> c;

    switch(c){
        case 'a':
        case 'A':
            std::cout << "Voce digitou a letra 'a' ou 'A' " << std::endl;
            break;
        case 'b':
        case 'B':
            std::cout << "Voce digitou a letra 'b' ou 'B' " << std::endl;
            break;
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'e':
        case 'E':
            std::cout << "Voce digitou a letra 'c' ou 'C', ou 'd' ou 'D', ou 'e' ou 'E' " << std::endl;
            break;
        case 'f':
        case 'F':
            std::cout << "Voce digitou a letra 'f' ou 'F' " << std::endl;
            break;
        default:
            std::cout << "Voce nao digitou uma letra valida!" << std::endl;
    }

    system("pause");
    return 0;
}