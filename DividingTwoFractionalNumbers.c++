#include<iostream>

using namespace::std;

int main(){
    float a,b,c;

    cout<<"Enter the First number: ";
    cin>>a;


    cout<<"Enter the Second number: ";
    cin>>b;

    c= a/b;
    cout<<"The answer gotten from the division of "<<a<<" and "<<b<<" is "<<c<<endl;

    c=b/a;
    cout<<"The answer gotten from the division of "<<b<<" and "<<a<<" is "<<c;
//this program works best if the expected answer is in the form of an float,

    return 0;
}