#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//---------------------------------------------------------------------------

int main()
{
        int p,q,w,m;
        char z,l;
        
        do
        {

        cout<<"Program podaje wygran¹ na podstawie podanych wynikow rzutow kostka.\n ";
        cout<<"\n------------------------------------------------------------------\n\n";
        cout<<"Czy program ma wylosowac wyniki rzutow? [tak - wybierz 't'; nie - wybierz 'n']\n";
        cin>>l;
        switch (l) {
        case 'n': {
                cout << "Podaj liczbe oczek na kostce:\n";
                cout<<"Rzut 1: ";
                cin >> p;
                if (p<0 || p>7)
                        {cout<<"\nBledna wartosc. Wpisz ja ponownie.\n";
                        cout<<"\nRzut 1: ";
                        cin >> p; };
                cout<<"Rzut 2: ";
                cin >> q;
                if (q<0 || q>7)
                        {cout<<"\nBledna wartosc. Wpisz ja ponownie.\n";
                        cout<<"\nRzut 2: ";
                        cin >> q; };
                }; break;
        case 't': {
                randomize();
                p=random(6) +1;
                q=random(6) +1;
                cout<<"Wylosowane wyniki: \n"<<"Rzut 1: "<<p<<"\nRzut 2: "<<q<<endl;
                }; break;
        default:  break;
        };


        m=p%2;
        switch (m) {
        case 0: {
                if (q==2 || q==4 || q==5) w=p+3*q;
                if (q==1 || q==3 || q==6) w=2*q;
                }; break;
        case 1: {
                if (q==1 || q==3 || q==6) {
                                if (p==q) w=5*p+3;
                                else w=2*q+p; };
                if (q==2 || q==4 || q==5) w=min(p,q)+4;
                if (p==5 && q==5) w=min(p,q)+9;
                
                }; break;
        default: break;
        };
        cout<<"Wygrana: "<<w;
        gotoxy(40,23);
        cout<<"\n\nChcesz kontynuowac program? [odp t lub n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
        return 0;
}


 
