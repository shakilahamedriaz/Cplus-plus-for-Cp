//increment and decrement operators
#include <iostream>

using namespace std;
int main()
{
   
   int a=2;
   int b=3;

   int c=a+b;
   cout<<"c is: "<< c<<endl;   //ANS: 5
   cout<<"post increment: "<< c++<<endl; // ANS: 5
   cout<<c<<endl; // ANS: 6
   cout<<"pre increment: "<< ++c<<endl; // ans : 7

   cout<<"post decrement: "<< c--<<endl; // ans: 7
   cout<<"pre decrement: "<<--c<<endl;   // ans: 5  

   //what is pre increment and post increment
    //pre increment: ++a
    //post increment: a++

    //what is pre decrement and post decrement
    //pre decrement: --a
    //post decrement: a--


    return 0;
}