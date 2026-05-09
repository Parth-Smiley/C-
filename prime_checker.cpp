#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter your number : ";
    int number;
    cin>>number;
    for(int i = 2 ; i < int(number^(1/2)); i++)
        {
            if(number%i == 0)
            {
                cout<<"The number is not prime";
                return 0;
            }
        }
    cout<<"The number is prime";
    return 0;

}