#include<iostream.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------
/*

d=1-4*a*b;
y=a*x+b;
a*x-y+b=0;
x*x+y*y=r*r;


*/

int main()
{
        float a,b,x1,x2,x0,y,r,d,pd,A,B;
        cout<<"Program oblicza ilosc punktow wspolnych prostej z okregiem."<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<endl<<"Podaj a: ";
        cin>>a;
        cout<<endl<<"Podaj b: ";
        cin>>b;
        cout<<endl<<"Podaj r: ";
        cin>>r;
        cout<<endl;
        d=(2*a*b)*(2*a*b)-4*(1+a*a)*(b*b-r*r);

        A=1+a*a;
        B=2*a*b;

        if (d==0) {
                        cout<<"Prosta jest styczna do okregu -> 1 p. wspolny."<<endl;
                        cout<<"Delta wynosi: "<<d<<endl;
                        x0 = (-B)/(2*A);
                        y=(a*x0)+b;
                        cout<<"Prosta jest styczna w punkcie ("<<x0<<","<<y<<").";
                        };
        if (d>0) {
                        cout<<"Delta wynosi: "<<d<<endl;
                        if (a==0) cout<<"Bledne wartosci. a nie moze wynosic 0."<<endl;
                        else {
                        pd = sqrt (d);
                        cout<<"Prosta przecina okreg w 2 punktach."<<endl;
                        x1=(-B-pd)/(2*A);
                        y=a*x1+b;
                        cout<<"Prosta przecina okrag w punktach ("<<x1<<","<<y;
                        x2=(-B+pd)/(2*A);
                        y=a*x2+b;
                        cout<<") oraz ("<<x2<<","<<y<<").";
                        }
                        }
        if (d<0) cout<<"Brak punktow wspolnych."<<endl;

        getch();
        return 0;

}

