#include <iostream>
using namespace std;

int sum(int a, int b=1)  // a,b are parameters 
{ 
    int sum = a + b;
    return sum;
}

int diff(int a, int b)  // a,b are parameters 
{ 
    int diff = a - b;
    return diff;
}

int main()
{

    // int s = sum(5, 4);
    // cout << "sum = " << s << endl;

    int s = sum(5);
    cout << "sum = " << s << endl;

    int d = diff(5, 4);
    cout << "diff = " << d << endl;



    return 0;
}