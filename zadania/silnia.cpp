#include <iostream.h>
#include <conio.h>
#include <math.h>
/*-------------------------------------------------------------------*/

int main()
{
  int n,k,s,s1,s2,l,m;
  char z;
  do
        {
         cout<<"Program wylicza wartosc symbolu Newtona.\n";

         cout<<"Podaj liczbe n: ";
         cin>>n;
         cout <<"\nPodaj liczbe k: ";
         cin>>k;

         s=1; s1=1; s2=1;
         if (n==0) s=1;
         else for (int i=1; i<=n; i++) s=i*s;
         //cout<<"\nSilnia n wynosi: "<<s;

         if (k==0) s1=1;
         else for (int j=1; j<=k; j++) s1=j*s1;
         //cout<<"\nSilnia k wynosi: "<<s1;
         l=n-k;
         if (l==0) s2=1;
         else for (int o=1; o<=l; o++) s2=o*s2;
         m=s/(s1*s2);
         //cout<<"\nSilnia n-k wynosi: "<<s2;
         cout<<"\nSymbol Newtona wynosi: "<<m;

        cout << "\n\nKontynuowac program? [t/n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
  return 0;
}
//--------------------------------------------------------------------------- 
