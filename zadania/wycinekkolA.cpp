#include<iostream.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------

int main()
{
        float r,st;
        float rad,p,p1,p2;

        cout<<"Program sluzy obliczaniu pola wycinka kola."<<endl;
        cout<<"Kat rozwarcia 'alfa' podaj w stopniach."<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Podaj R: "<<endl;
        cin>>r;
        cout<<"Podaj kat rozwarcia 'alfa': "<<endl;
        cin>>st;
        //cout<<endl<<"R wynosi: "<<r<<endl;
        //cout<<endl<<"st wynosi: "<<st<<endl;
        rad=(M_PI*st)/180;
        //cout<<endl<<"Pi wynosi: "<<M_PI<<endl;
        //cout<<endl<<"rad wynosi: "<<rad<<endl;

        p1=(r*r)/2;
        //cout<<endl<<"p1 wynosi: "<<p1<<endl;
        p2=rad-(sin(rad));
        //cout<<endl<<"p2 wynosi: "<<p2<<endl;
        p=p1*p2;
        //cout<<endl<<"p wynosi: "<<p<<endl;
        cout<<endl<<"Pole tego wycinka kola wynosi "<<p;
        getch();
        return 0;
}




