#include "stdafx.h"
#include <iostream> 
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

class Klasa {
	public:
	Klasa() {
			cout << "Wywolanie konstruktora Klasa()" << endl;
	}

	~Klasa () {
			cout << "Destruktor Klasa ()" << endl;
	}
};

class Zwierzak {
	public:
	Zwierzak() {
			cout << "Wywolanie konstruktora Zwierzak()" << endl;
	}

	~Zwierzak () {
			cout << "Destruktor Zwierzak ()" << endl;
	}
};

class Logo {
	public:
	Logo() {
			cout << "Wywolanie konstruktora Logo()" << endl;
	}

	~Logo () {
			cout << "Destruktor Logo ()" << endl;
	}
};

class Kameleon: public Zwierzak, public Logo {
	public:
	Kameleon(){
			cout << "Wywolanie konstruktora Kameleon()" << endl;
	}

	~Kameleon () {
			cout << "Destruktor Kameleon ()" << endl;
	}
};

void test () {
	Klasa obiekt;
	Kameleon x;
}

int main(int argc, char** argv[])
{
	int i,j;
	char k[12];
	string tekst;
	//////////////////////
	cout<<"Witaj Kasiu!" <<endl;
	system("PAUSE");
	system("cls");
	//////////////////////
	/*
	for(i=1;i<=10;i++)      
    {
     printf("\n");
     for(j=1;j<=10;j++)
			printf("%4d",i*j);
     }
	printf("\n");
	system("PAUSE");
	system("cls");
	/////////////////////

	/////////////////////
	cout<<"Imie: ";
	cin>> k;
	cout<<"Wpisano: "<<k<<endl;
	system("PAUSE");
	system("cls");
	///////////////////// */
	cout<<"Tekst: ";
	cin>> tekst;
	cout<<"Wpisano: "<<tekst<<endl;
	int dlugosc=tekst.length();
	cout << "The length of the tekst is " << dlugosc << " characters.\n";
	cout<<"Reversed: ";
	for(i=dlugosc-1;i>=0;i--) cout << tekst[i];
	cout << endl; 

	// alternatywa::
	/*
	string txt, wynik;
	cin >> txt;
	for (int i= txt.size() -1 >=0; i--) {
		wynik+=txt[i];
	
	}
	cout << wynik;

	*/
	system("PAUSE");
	system("cls");
	//////////////////////
	test();
	system("PAUSE");
	
	cout << "Wypisanie tekstu" << endl;

	Kameleon obiekt;

	system("PAUSE");

	return 0;
}