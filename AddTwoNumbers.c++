#include<iostream>

using namespace::std;

int main(){
    //defining variables, a, b of data type int (Interger)
    int a,b;
//prompting user for inputs
    cout<<"Enter first number: ";
    /*
    Mind the brace direction, we have one going leftwards and the other going rightwards
    "<<" is used together with cout while ">>" is used together with cin
    */
    cin>>a;

    cout<<"Enter the second number: ";
    
    cin>>b;

    int c= a+b;

    cout<<"The sum of "<< a <<" and "<<b<<" is "<<c;


    return 0;
}