#include <iostream>
using namespace std;

void PrintHi()  // No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b)
{
    int c;

    c = a+b;
    a=500;

    cout<<"The value of c is "<<c<<endl;

    return c;
}

//void swap(int a, int b)
void swap(int &a, int &b) //By including the keyword & after the name od datatype and before the variable name we are able change the actual parameter
{
    int c;

    c=a;
    a=b;
    b=c;

    cout<<"The values of a and b after swapping inside the function are : "<<a<<" "<<b<<endl;
    return;
}

void fun(int &a, int b)
{
    a=99999;
    b=99999;
    cout<<"The values of a and b inside the fun function are : "<<a<<" "<<b<<endl;
}

int main()
{
    PrintHi();

    int a,b;
    int c;

    a=4;
    b=6;
    c=75

    cout<<"The values of a and b before passing into fun function are : "<<a<<" "<<b<<endl;


    // int d;
    // d=sum(a,b);

    // cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a; // The value of a to turned out to be 500

    // cout<<"The value of c is "<<c<<endl;

    swap(a,b)

    cout<<"The values of a and b after passing into fun function are : "<<a<<" "<<b<<endl;



    return 0;
}