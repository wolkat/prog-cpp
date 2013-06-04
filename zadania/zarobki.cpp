#include <iostream.h>
#include <conio.h>
int main()
{
        int g,s;
        float p;
        char k,z;
        do
        {
        clrscr ();
        cout << "Jest to program obliczajacy tygodniowe zarobki brutto i netto pracownikow.\n\n";
        cout << "Kategorie pracownikow to A,B,C,D\n\n";
        cout << "Podaj kategorie zaszeregowania: ";
        cin >> k;
        cout << "Podaj liczbe przepracowanych godzin: ";
        cin >> g;
        k=toupper (k);
        switch (k)
        {
          case 'A': s=15; break;
          case 'B': s=25; break;
          case 'C': s=30; break;
          case 'D': s=35; break;
          default: cout << "blad"; break;
        }
        if (g<=40) {p=g*s;
                        cout << "Pensja bruto pracownika wynosi: " << p << endl;}
          else {p=40*s;
                g=g-40;
                p=p+2*g*s;
                cout << "Pensja pracownika bruto wynosi: " << p << endl;}
        if (p<=700) {p=p*0.85;
                cout << "Pensja netto wynosi: " << p << endl;}
          else if (p<=1200) {p=p*0.8;
                        cout << "Pensja netto wynosi: " << p << endl;}
            else if (p>1200) {p=p*0.75;
                        cout << "Pensja netto wynosi: " << p << endl;}
        cout << "Kontynuowac program? [t/n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
        //getch ();
        //system("PAUSE");
        return 0;
}
