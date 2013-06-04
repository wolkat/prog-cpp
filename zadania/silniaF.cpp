#include <iostream.h>
#include <conio.h>
#include <math.h>
/*-------------------------------------------------------------------*/

int main()
{
  int n,k,s,s1,s2;
  int silnia (int);
  int symNewt (int , int);
  char z;
  do
        {
         cout<<"Program wylicza wartosc symbolu Newtona.\n";

         cout<<"Podaj liczbe n: ";
         cin>>n;
         cout <<"\nPodaj liczbe k: ";
         cin>>k;


         cout<<"\nSymbol Newtona wynosi: "<< symNewt (n,k);


        cout << "\n\nKontynuowac program? [t/n] ";
        z=getch();
        z=toupper(z);
        clrscr();
        }
        while (z=='T');
  return 0;
}

int silnia (int x)
{
int s=1;
if (x==0) s=1;
for (int i=1; i<=x; i++) s=i*s;
return s;
}

int symNewt (int n, int k)
{
return silnia(n)/(silnia(k)*silnia(n-k));
}

//---------------------------------------------------------------------------
