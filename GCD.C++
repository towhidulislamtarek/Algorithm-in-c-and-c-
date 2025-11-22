#include <iostream>
using namespace std;

int GCD(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return GCD(num2, num1 % num2);
    }
}

int main()
{
    int value = GCD(12, 18);

    cout << "GCD of number 1 and number 2 is: " << value << endl;
    return 0;
}

