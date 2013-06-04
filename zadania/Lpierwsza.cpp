//---------------------------------------------------------------------------
#include<iostream.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------

int main()
{
        int n,i;
        bool Pierwsza = true;
        cout<<"Program sprawdza czy podana wartosc jest liczba pierwsza";
        cout<<endl<<endl<<"Podaj liczbe naturalna n: ";
        cin>>n;
        i=3;
        if (n<=0) {
                cout<<"Podana liczba nie jest liczba naturalna."<<endl;
                cout<<"Podaj liczbe naturalna n: ";
                cin>>n;  };
        do i++;
        while ((n % i)!=0);
        if (Pierwsza) cout<<"Liczba pierwsza";
        else {
                cout<<"Liczba nie jest pierwsza";
                Pierwsza = false; };

        getch();
        return 0;
}
//---------------------------------------------------------------------------
 