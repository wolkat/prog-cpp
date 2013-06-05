/*=============================================================
     Program rysuje wahadlo t³umione.  Wahadlo powinno sie
     zatrzymac w idealmej pozycji pionowej.
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
void main()
{
  int r,                          // promien kulki
      l;                          // dlugosc linki
  float alfa_rad,                 // kat odchylenia wahadla w radianach
        alfa;                     // kat odchylenia wahadla

                                  // wczytanie danych
  alfa=czyt_int("Podaj kat: ",20,89);
  l=czyt_int("\nPodaj dlugosc linki: ",20,300);
  r=czyt_int("\nPodaj promien kulki: ",1,15);

  alfa_rad=alfa*M_PI/180.;
  grafika();                     //inicjalizacja grafiki
  wahadlo(alfa_rad, r, l);       //uruchomienie wahadla
  getch();
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
    x = zaczepx+(l+r)*sin(kat)  ;
    y = zaczepy+(l+r)*cos(kat) ;
                          //obliczenie wsplorzednych konca linki
    lx = zaczepx+l*sin(kat) ;
    ly = zaczepy+l*cos(kat);

    line(zaczepx, zaczepy, lx, ly);       //rysowanie linki
    circle(x, y,r);                      //rysowanie okregu

    delay(8);                            //opoznienie

    if (licznik==0)          // warunki dla kierunku ruchu wahadla
    {
      kat-=0.01;
      if (kat<=-(alfa_rad))
      {
        licznik=1;
        alfa_rad -=0.1;
        kat = -alfa_rad;
       }
    }
    if (licznik==1)
    {
       kat+=0.01;
       if (kat>=alfa_rad)
       {
        licznik=0;
        alfa_rad -=0.1;
        kat= alfa_rad;
       }
    }
    setcolor(BLACK);                   //wymazanie wahadla
    circle(x,y,r);
    line(zaczepx, zaczepy, lx, ly);
    if (alfa_rad <=0.1)               // narysowanie wahadla
    {
      alfa_rad = 0;
      setcolor(YELLOW);
      kat=alfa_rad;
      x = zaczepx+(l+r)*sin(kat)  ;
      y = zaczepy+(l+r)*cos(kat) ;

      lx = zaczepx+l*sin(kat) ;
      ly = zaczepy+l*cos(kat);
      circle(x,y,r);
      line(zaczepx, zaczepy, lx, ly);
    }
  }
  while (alfa_rad > 0);
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