//---------------------------------------------------------------------------

#include <iostream.h>
#include <conio.h>


main()
{
int i,a,a1,b1,b,nww;

cout<<"Program oblicza najmniejsza wspolna wielokrotnosc dwoch liczb calkowitych a i b."<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
cout<<"Podaj a: ";
cin>>a;
cout<<"\nPodaj b: ";
cin>>b;
nww=0;
if (a>0 && b>0) {
         a1=a;
         b1=b;

         while (a1!=b1) {
                if (a1>b1) b1=b1+b;
                else a1=a1+a;
                  };
         nww=a1;
        };

cout<<endl;
cout<<"NWW wynosi: "<<nww;

getch();
return 0;
}
//---------------------------------------------------------------------------
