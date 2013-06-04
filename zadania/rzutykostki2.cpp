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
                switch (q){
                case 2: case 4: case 5: w=p+3*q; break;
                case 1: case 3: case 6: w=2*q; break;
                default: break;
                };
                }; break;
        case 1: {
                switch (q){
                case 1: case 3: case 6: {
                                if (p==q) w=5*p+3;
                                        else w=2*q+p;
                                }; break;
                case 2: case 4: case 5: {
                                if (p==q) w=min(p,q)+9;
                                        else w=min(p,q)+4;
                                }; break;
                default: break;
                };  break;
        default: break;
        };
        };
        cout<<"Wygrana: "<<w;
        
        cout<<"\n\nChcesz kontynuowac program? [odp t lub n] ";
        z=getch();
        z=toupper(z);
        clrscr();

        } while (z=='T');
        return 0;
}



