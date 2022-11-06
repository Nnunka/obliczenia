#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,x=0;

    cout<<"Ax+B=0"<<endl;
        cout<<"Apodaj wartosc A ";
        cin>>a;

    if (a==0)
    {
        cout<<"A jest rowne 0!!";
    }

    else
    {
        cout<<"Apodaj wartosc B ";
            cin>>b;
    x=(-b)/a;
        cout<<"Miejscem zerowym jest "<<x;
    }

    return 0;
}