#include<iostream.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------

int main()
{
        int a,a1,b1,b,nwp;
        char z;
        do
        {
        cout<<"Program sluzy obliczaniu najwiekszego wspolnego podzielnika.\n";
        cout<<"------------------------------------------------------------\n\n";
        cout << "Podaj liczby do obliczenia NWP:\n";
        cout<<"liczba 1: ";
        cin >> a;
        cout<<"liczba 2: ";
        cin >> b;
        if (a>0 && b>0) {
        nwp=0;
        a1=a;
        b1=b;
        do
        {

        if (a1>b1) a1=a1-b1;
                else b1=b1-a1;
        }
        while (a1!=b1);

        nwp=a1;
        };
        if (nwp==0) cout<<"Brak rozwiazan.";
                else cout << "NWP wynosi: "<<nwp;
        gotoxy(40,23);
        cout<<"\n\nChcesz kontynuowac program? [odp t lub n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');

        return 0;
}



