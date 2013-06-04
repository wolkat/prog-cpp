//---------------------------------------------------------------------------

#include <iostream.h>
#include <conio.h>


main()
{
int a,a1,b1,b,nwp;

cout<<"Program oblicza najwiekszy wspolny podzielnik dwoch liczb calkowitych a i b."<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
cout<<"Podaj a: ";
cin>>a;
cout<<"\nPodaj b: ";
cin>>b;
nwp=0;
if (a>0 && b>0) {
         a1=a;
         b1=b;

         while (a1!=b1) {
                if (a1>b1) a1=a1-b1;
                else b1=b1-a1;
                  };
         nwp=a1;
        };
if (nwp==0) cout<<"Brak rozwiazan.";
        else cout<<"NWP wynosi: "<<nwp;

cout<<endl;

getch();
return 0;
}
//---------------------------------------------------------------------------
