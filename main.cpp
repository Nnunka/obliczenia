#include <iostream>

using namespace std;

int opcja=0;

int main()
{

    cout<<"Witaj, wybierz rownanie."<<endl;
    cout<<"1. Ax+B=0"<<endl;
    cout<<"2. Ax+By+C=0"<<endl;
    cout<<"3. Ax^2+By+C=0"<<endl;
    do{
        cout<<"Opcja nr.";
        cin>>opcja;
    }
    while(opcja!=1&&opcja!=2&&opcja!=3);
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

    return 0;

}