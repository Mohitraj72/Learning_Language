#include <iostream>
using namespace std;

int sum(int a, int b = 1)
{ // a,b are parameters
    int sum = a + b;
    return sum;
}


int diff(int a, int b)
{ // a,b are parameters
    int diff = a - b;
    return diff;
}

int main()
{

    int s = sum(2,10);
    int D = diff(8, 4);

    cout << "Sum = " << s << endl;
    cout << "Diff = " << D << endl;

    return 0;
}