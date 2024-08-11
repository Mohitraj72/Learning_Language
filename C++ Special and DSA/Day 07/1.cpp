#include <iostream>
using namespace std;

void sayhello()
{
    cout << "Hello Mohit\n";
}

void assistant(){
    sayhello();
    cout<<"Hello How are you";
}

int main()
{

    sayhello(); // Function Call
   assistant();

    return 0;
}