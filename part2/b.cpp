//overflow 
#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   int ,char, long int, long long int, float, double;

   
   // -10^9<int>10^9
   // -10^12<long int>10^12
   // -10^18<long long int>10^18

    int a=100000;
    int b=100000;
    int c=a*b;
    cout<<c<<endl; // overflow hoye jay.karon int er max value 10^9

    int d=a*1LL*b; // 1LL means 1 long long int
    cout<<d<<endl; // overflow hoye jay na.karon long long int er max value 10^18

      

    // 10^-9<float>10^9
    // 10^-18<double>10^18
    
    float e=10.0;
    float f=3.0;
    float g=e/f; // 3.3333333333333335
    cout<<g<<endl; // 3.3333333333333335


    double a=100000;
    double b=100000;
    double c=a*b; // 1e+10
    cout<<c<<endl; // 1e+10
    cout<<fixed<<setprecission(0) <<c<<endl; // 10000000000.000000 karon fixed use kore decimal point er porer 6 ta digit show korbe




   


    return 0;
}