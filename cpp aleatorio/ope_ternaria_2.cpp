#include <iostream>

int main(){

    std::cout << "Digite um numero correspondente a um mes do ano: ";
    int num = 0;
    std::cin >> num;

    std::cout << std::endl;

    std::string mes = (num == 1) ? "Janeiro" :
                      (num == 2) ? "Fevereiro":
                      (num == 3) ? "Março":
                      (num == 4) ? "Abril":
                      (num == 5) ? "Maio":
                      (num == 6) ? "Junho":
                      (num == 7) ? "Julho":
                      (num == 8) ? "Agosto":
                      (num == 9) ? "Setembro":
                      (num == 10) ? "Outubro":
                      (num == 11) ? "Novembro":
                      (num == 12) ? "Dezembro":
                      "O valor digitado nao corresponde a um mes do ano.";
    
    std::cout << mes << std::endl;

 /*   switch (num)
    {
    case 1:
        std::cout << "Janeiro" << std::endl;
        break;
    case 2:
        std::cout << "Fevereiro" << std::endl;
        break;
    case 3:
        std::cout << "Março" << std::endl;
        break;
    case 4:
        std::cout << "Abril" << std::endl;
        break;
    case 5:
        std::cout << "Maio" << std::endl;
        break;
    case 6:
        std::cout << "Junho" << std::endl;
        break;
    case 7:
        std::cout << "Julho" << std::endl;
        break;
    case 8:
        std::cout << "Agosto" << std::endl;
        break;
    case 9:
        std::cout << "Setembro" << std::endl;
        break;
    case 10:
        std::cout << "Outubro" << std::endl;
        break;
    case 11:
        std::cout << "Novembro" << std::endl;
        break;
    case 12:
        std::cout << "Dezembro" << std::endl;
        break;
    default:
        std::cout << "O valor digitado nao corresponde a um mes do ano." << std::endl;
    
    }
*/
    system("pause");
    return 0;
}