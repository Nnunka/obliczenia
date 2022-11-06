#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int opcja=0;

int main()
{
    cout<<"Witaj, wybierz rownanie."<<endl;
    cout<<"1. Ax+B=0"<<endl;
    cout<<"2. Ax+By+C=0"<<endl;
    cout<<"3. Ax^2+Bx+C=0"<<endl;

    do
    {
        cout<<"Opcja nr.";
        cin>>opcja;
    }while(opcja!=1&&opcja!=2&&opcja!=3);
    cout<<endl;

    if(opcja==1)
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
    }

    if(opcja==2)
    {
        int a=0,b=0,c=0,x=0;
        cout<<"Podaj wartosc A ";
        cin>>a;
        cout<<"Podaj wartosc B ";
        cin>>b;
        if (b!=0)
        {
        cout<<"Podaj wartosc C ";
        cin>>c;
        x=(-c)/a;
        cout<<"Miejscem zerowym jest "<<x;
        }
        else
        {
        cout<<"B nie moze byc rowne 0!!";
        }
    }

    if(opcja==3)
    {
    int a=0,b=0,c=0,x1=0,x2=0,x=0,d=0,pd=0;

    cout<<"Podaj wartosc A ";
    cin>>a;
    if(a!=0){
        cout<<"Podaj wartosc B ";
        cin>>b;
        cout<<"Podaj wartosc C ";
        cin>>c;
        cout<<endl;
        d=(b*b)-4*a*c;
        pd=pow(d, 1/2);
        x1=(-b-pd)/2*a;
        x2=(-b+pd)/2*a;
        cout <<"x1 "<<x1<<endl;
        cout <<"x2 "<<x2<<endl;

        }
        else
        {  
        cout<<"Podaj wartosc B ";
        cin>>b;
        cout<<"Podaj wartosc C ";
        cin>>c;
        if (b==0)
        {
            if(c==0)
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
                x=(-c)/b;
                cout<<endl;
                cout<<"Miejsce zerowe to ";
            }
    }

}

    return 0;
}