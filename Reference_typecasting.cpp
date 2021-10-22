#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int &y = x; //refrence varible of x
    cout<<x<<"\n";
    cout<<y<<"\n";


    int a = 10.2;
    float b = 23.5;
    cout<<a<<"\n";
    cout<<b<<"\n";

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"Type Casting..!"<<"\n";
    cout<<"\n";
    cout<<"Integer a = "<<a<<endl;
    cout<<"Integer b = "<<int(b)<<endl;

    cout<<"float a = "<<(float)a<<endl;
    cout<<"float b = "<<b;
    return 0;
}