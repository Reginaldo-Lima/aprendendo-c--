#include <iostream>

using namespace std;

int main(){

    int i = 10;

    cout << "LOOPING DO-WHILE" << endl;
    do
    {
        i++;
        cout << "O valor da variavel i eh: " << i << endl;
    } while (i >= 10 && i <= 20);
    
    cout << "LOOPING WHILE" << endl;
    int i2 = 10;
    while (i2 >= 10 && i2 <= 20)
    {
        i2++;
        cout << "O valor da variavel i2 eh: " << i2 << endl;
    }
    

    system("pause");
    return 0;
}//fim main