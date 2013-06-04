#include <iostream.h>
#include <conio.h>
#include <math.h>
int main()
{

        int n,i,a;
        //bool Pierwsza = true;
        char z;
        do
        {


        cout << "Program wyszukuje liczby pierwsze z przedzialu [2...n].\n\n";
        cout<<"Podaj 'n': ";
        cin>>n;
        cout<<endl;
        //

        if (n<=2) {
                cout<<"Podana liczba jest spoza zakresu."<<endl;
                cout<<"Podaj liczbe n: ";
                cin>>n;  };
        cout<<"Liczby pierwsze z zakresu [2..."<<n<<"] to { ";
        for (i=2; i<=n; i++) {
                for (a=2; a<=i; a++) {
                        if ((a!=i) && (i%a==0)) break;
                        if (a==i) cout<<i<<" ";

                               
                        };
                        };

         cout<<"}";

        cout << "\n\nKontynuowac program? [t/n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
        return 0;
} 
