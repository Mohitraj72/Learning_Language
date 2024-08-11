#include <iostream>
using namespace std;

//! Q1  WAF to find the product of 2 numbers - a & b.
int pro(int a, int b)
{
    int p = a * b;
}

//! Q2 WAF to print if a number is odd or even.
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

//! Q3 WAF to print the factorial of a number, n.

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * 1;
    }

    cout << "factorial(" << n << ")= " << fact << endl;
    return fact;
}

//! Q4 WAF to print if a number is prime or not.

bool isPrime(int n){
    if (n==1){
        return false;
    } 

    for (int i = 2; i<= n-1; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true; 
}


bool isPrime2 (int n){
    if (n == 1){
        return false;
    } 
    for (int i; i*i<=n; i++){
        if (n % 1 == 0){
            return false;
        }
    }

    return true;
}


//! Q5  WAF to find the binomial coefficient for given n & r.

 int binomial (int n){
    int fact = 1;
    for (int i =1; i<=n; i++){
        fact *= i;
    }
    return fact;
 }

 int binCoeff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1/(val2*val3);
    return result;

 }

 

int main()
{

    cout << pro(10, 20) << endl;

    cout << isEven(14) << endl;

    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    factorial(6); 


    cout << isPrime(55)<< endl; 
    cout << isPrime2(2)<< endl; 

    cout<< binCoeff(4,2) << endl;


    return 0;
}