#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 1;
    int sum = 0;

    while (x <= 10)
    {
        sum += x;
        x++;
    }

    cout << "The sum is: " << sum << endl;
    
    return 0;
}