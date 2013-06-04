#include <iostream.h>
#include <conio.h>
#include <math.h>
int main()
{

        int p,n,p1,s;
        //float p,p1,s,n;
        char z;
        do
        {
        clrscr ();
        s=0;
        cout << "Program bada, czy wczytana z klawiatury \ndodatnia liczba calkowita n jest liczba doskonala. .\n\n";
        cout<<"Podaj 'n': ";
        cin>>n;
        cout<<endl;
        p=(int)sqrt(n);
        while (p>1) {
                 if (n%p==0) {
                        s=s+p;
                        p1=n/p;
                        if (p1!=p) s=s+p1;
                        };
                        p=p-1;
                        }
        s=s+1;
        if (s==n) cout<<n<<" jest liczba doskonala.";
         else cout<<n<<" nie jest liczba doskonala.";
                 



        cout << "\n\nKontynuowac program? [t/n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
        return 0;
}
