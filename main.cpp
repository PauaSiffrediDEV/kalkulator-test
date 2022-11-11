#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float x,y;
char wybor;

int main()
{
for(;;)
{
    cout << "Podaj 1 liczbe: ";
    cin>>x;
    cout<<"Podaj 2 liczbe: ";
    cin>>y;


    cout<<endl;
    cout<<"Menu glowne:"<<endl;
    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cout<<"3.Mnozenie"<<endl;
    cout<<"4.Dzielenie"<<endl;
    cout<<"5.Wyjscie"<<endl;

    cout<<"Wybierz: ";
    wybor=getch();

    switch(wybor)
    {
        case '1':
            cout<<"Suma= "<<x+y;
        break;

        case '2':
            cout<<"Roznica= "<<x-y;
        break;

        case '3':
            cout<<"Mnozenie= "<<x*y;
        break;

        case '4':
            if (y=0) cout<<"nie dzielmy przez 0";
            else cout<<"Dzielenie= "<<x/y;
        break;

        case '5':
            exit(0); //wyjscie z programu konczy 0 bo return 0.
        break;

        default: cout<<"Nie ma takie opcji w menu!";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
