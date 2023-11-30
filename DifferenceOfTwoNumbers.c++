#include<iostream>

using namespace::std;

int main(){
    //declaring variables , a, b, c with data type int so the calculation will only be done on intergers
    int a,b,c;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    c = a-b;
    //this will produce an answer exactly what we entered
    // but if we use conditions we could control the way users enter digits
    // we'll see that in another program
    
    cout<<"The difference between "<<a<<" and "<<b<<" is "<<c<<endl;

    return 0;
}