#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,x=0;

    cout<<"Podaj wartosc A ";
    cin>>a;
    cout<<"Podaj wartosc B ";
    cin>>b;

    if (a==0)
    {
        if(b==0)
        {
            cout<<"F.stala";
        }
        else
        {
            cout<<"brak m.zerowych";
        }
        }
        else
        {
            x=(-b)/a;
            cout<<"Miejscem zerowym jest "<<x;
        }
cout<<endl;

    return 0;
}