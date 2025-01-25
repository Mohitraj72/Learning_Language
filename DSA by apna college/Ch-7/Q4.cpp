#include <iostream>
using namespace std;

// WAF to Find the Product of 2 Numbers

int prod(int a, int b)
{
    int prod = a * b;
    return prod;
}

// WAF to print if  a number is odd or even

bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int P = prod(5, 5);
    cout << "Product = " << P << endl;

    cout << prod(10, 5) << endl;

    cout << isEven(50) << endl;

    return 0;
}
