/*=============================================================
     Program rysuje wahadlo idealne. Zatrzymanie wahadla
     nastepuje po nacisnieciu dowolnego klawisza.
=============================================================*/
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <math.h>
#include "winbgim.cpp"
//------------------------------------------------------------
void grafika();
void wahadlo(float , int , int );
int czyt_int(char *, int , int);
//------------------------------------------------------------
int main()
{
  int r,                          // promien kulki
      l;                          // dlugosc linki
  float alfa_rad,                 // kat odchylenia wahadla w radianach
        alfa;                     // kat odchylenia wahadla

  cout<<"Zad. 36\nProgram rysuje wahadlo idealne. Zatrzymanie wahadla\n\tnastepuje po nacisnieciu dowolnego klawisza.\n";
                                  // wczytanie danych
  alfa=czyt_int("\nPodaj kat: ",20,89);
  l=czyt_int("\nPodaj dlugosc linki: ",20,300);
  r=czyt_int("\nPodaj promien kulki: ",1,15);

  alfa_rad=alfa*M_PI/180.;
  grafika();                     //inicjalizacja grafiki
  wahadlo(alfa_rad, r, l);       //uruchomienie wahadla
  return 0;
}

/*------------------------------------------------------------
    Funkcja rusuje wahadlo idealne (bez tlumienia) w ruchu
-------------------------------------------------------------*/
void wahadlo(float alfa_rad, int r, int l)
{
  float kat=alfa_rad;
  float x,                  // wspolrzedna x srodka okregu
        y,                  // wspolrzedna y srodka okregu
        lx,                 // wspolrzedna x konca linki
        ly,                 // wspolrzedna y konca linki
        zaczepx,            // wspolrzedna x punktu zaczepienia wahadla
        zaczepy;            // wspolrzedna y punktu zaczepienia wahadla
  int licznik=0;
  zaczepx = getmaxx()/2;
  zaczepy = 20;
  do
  {
    setcolor(YELLOW);     //ustawienie koloru linii
                          //obliczenie wsplorzednych srodka okregu
    x = zaczepx+(l+r)*sin(kat);
    y = zaczepy+(l+r)*cos(kat);
                          //obliczenie wsplorzednych konca linki
    lx =zaczepx+l*sin(kat);
    ly =zaczepy+l*cos(kat);

    line(zaczepx, zaczepy, lx, ly);       //rysowanie linki
    circle(x, y,r);                      //rysowanie okregu

    delay(8);                            //opoznienie

    if (licznik==0)          // warunki dla kierunku ruchu wahadla
    {
      kat-=0.01;
      if (kat<=-(alfa_rad)) licznik=1;
    }
    if (licznik==1)
    {
      kat+=0.01;
      if (kat>=alfa_rad) licznik=0;
    }
    setcolor(BLACK);                   //wymazanie wahadla
    circle(x,y,r);
    line(zaczepx, 20,lx,ly);
  }
  while (!kbhit());   
}

/*------------------------------------------------------------
    Funkcja inicjalizuje tryb graficzny
-------------------------------------------------------------*/
void grafika()
{
  int sterownik, tryb;
  sterownik = DETECT;
  initgraph(&sterownik,&tryb,"");
}

/*------------------------------------------------------------
    Funkcja umozliwia wczytanie wartosci typu int
    oraz kontrole formalnej i  logicznej poprawnosci
    wczytywanej wartosci
-------------------------------------------------------------*/
int czyt_int(char *t, int min, int max)

{
  int xk, yk, l, b;
  cout << t;
  xk = wherex();    //wspolrzedne kursora
  yk = wherey();
  do                // czytanie wartosci typu int oraz kontrola
  {
    gotoxy(xk, yk);
    clreol();
    b = 0;
    cin >> l;
    if (!cin)
      {
	b = 1;
	cin.clear();
	cin.ignore(0xff, '\n');
      }
  }
  while (l<min || l>max || b==1);   
  }