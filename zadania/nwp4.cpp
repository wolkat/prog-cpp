#include<iostream.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------

int main()
{
        int a,a1,b1,b,nwd;
        char z;
        
        do
        {
        cout<<"Program sluzy obliczaniu najwiekszego wspolnego podzielnika.\n";
        cout<<"------------------------------------------------------------\n\n";
        cout << "Podaj liczby do obliczenia NWD:\n";
        cout<<"liczba 1: ";
        cin >> a;
        cout<<"liczba 2: ";
        cin >> b;
        if (a>0 && b>0) {
        nwd=0;
        a1=a;
        b1=b;
        while (a1>0 && b1>0) {
                if (a1>b1) a1=a1%b1;
                 else b1=b1%a1;
                };
        if (a1==0) nwd=b1;
                else nwd=a1;
        
        };
        if (nwd==0) cout<<"Brak rozwiazan.";
                else cout << "NWD wynosi: "<<nwd;
        gotoxy(40,23);
        cout<<"\n\nChcesz kontynuowac program? [odp t lub n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
        return 0;
}



