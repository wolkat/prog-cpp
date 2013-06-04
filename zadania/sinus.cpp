// szereg Taylora Sin x

#include<iostream>
#include <math.h>
#include <conio.h>
#include<cmath>

using namespace std;
float silnia(float n)
{
     /*switch (n)
      {
            case 0: return 1;
                    break;
            default: return n * silnia(n-1);
      }   */
      if (n==0) return 1;
        else return n* silnia(n-1);
}

float sink (int k, float &x, float &e)
         {
         float sinx,x_e,i_e,i;
         x_e = pow(x,2*k+1);
         i=pow(-1,k);
         //if ((i % 2) == 0) k = 1; else k = -1;
         i_e = silnia(2*k+1);
         /*cout<<"\ni="<<i;
         cout<<"\ni_e="<<i_e;
         cout<<"\nx_e="<<x_e; */
         sinx =  i* (x_e/i_e);
         if (fabs(sink(k+1,x,e))<=e) cout<<"\nsinx="<<sinx;
          return sinx;
          }
int main()
{
char z;
do
{
 clrscr();
 float x;
 int i,k=0,l=0;
 float e;
 //float sinx = 0;
 cout<<"Zad 16. Program oblicza sinus dla danego x. Wynik podaje w radianach.\n\n";

 cout << "Podaj x (w stopniach) = ";
  cin >> x;
  x=(x*M_PI)/180;


   cout << "Podaj dokladnosc e= ";
   cin >> e;


  do
  {      l++;
         k++;
         sink(k,x,e);

           }
  while (fabs(sink(k+1,x,e))<=e);



  cout << "\n\nZeby powtorzyc wcisnij T";
  cout<<"\nLiczba: "<<l;
  z=getch();
  z=toupper (z);
  }while (z=='T');
//system("PAUSE");
return 0;
}
