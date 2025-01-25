#include <iostream>
using namespace std;

void sayhello()
{
    cout << "Hello Mohit \n";
}

void assistant()
{
    sayhello();
    cout << "Work Done:";
}
int main()
{

    sayhello();
    assistant();

    return 0;
}