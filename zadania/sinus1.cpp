// szereg Taylora Sin x

#include<iostream>
#include <math.h>
#include <conio.h>
#include<cmath>

using namespace std;
int silnia(int n) // funkcja
{
     switch (n)
      {
            case 0: return 1;
                    break;
            default: return n * silnia(n-1);
      }
}
int main()
{
char z;
do
{
 clrscr();
 long double x;
 int n, k;
 long double sinx = 0;

 cout << "Podaj x = ";
  cin >> x;
  x = (M_PI * x)/180;     // zamiana stopni
  {
   cout << "Podaj n = ";
   cin >> n;

   for (int i=0; i <= n; i++)
    {
         long double x_n = pow(x,2*i+1);
         if ((i % 2) == 0) k = 1; else k = -1;
         int i_n = silnia(2*i+1);    //funkcja silnia

         sinx += k* (x_n/i_n);

    }
    cout << "sin x = "<< sinx << endl;
  }
  cout << "Zeby powtorzyc wcisnij T";
  z=getch();
  z=toupper (z);
  }while (z=='T');
system("PAUSE");
return 0;
}
