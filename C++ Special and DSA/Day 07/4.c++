#include<iostream>
using namespace std;

// ! Function overloading 

int sum(int a, int b){
    cout << (a+b) << endl;
    return a+b;
}
double sum(double a, double b){
    cout << (a+b) << endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << (a+b+c) << endl;
    return a+b+c;
}


int main(){

    sum (2,3);
    sum(1.2,1.3);
    sum(1, 5, 6);
    
    
    
    
    return 0;
}