#include<iostream>
using namespace std;

int sum(int a , int b)
{
    int sum = a + b;
    return sum;
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fact = n * factorial(n-1);
    return fact;
}

int sum_of_digits(int n)
{
    if(n<10)
    {
        return n;
    }
    int last_digit = n%10;
    int remaining = n/10;
    int sum = last_digit + sum_of_digits(remaining);
    return sum;
}

int nCr(int n , int r)
{
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    int result = (a)/(b * c);
    return result;
}

int main()
{
    int n = 568;
    cout<<nCr(8,2);

    return 0;
}