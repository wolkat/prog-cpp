#include <conio>
#include <windows.h>
#include <iostream.h>
#include <cstdio>
void RysujK(int wysokosc, int x, int y) {      //Funkcja Rysujaca litere "K"
        for (int i=0;i<wysokosc;i++) {     //Rysowanie kreski pionowej litery "K"
                gotoxy(x,y+i); cout << "K";
                }
        for (int i=0;i<(wysokosc+1)/2+1;i++) {  //rysowanie kresek ukosnych litery "K"
                gotoxy(x+wysokosc/2+1-i,y+i); cout << "K";
                gotoxy(x+wysokosc/2+1-i,y+wysokosc-1-i); cout << "K";
                }
}
void RysujW(int wysokosc, int x, int y) {      //Funkcja Rysujaca litere "W"
        for (int i=0;i<wysokosc;i++) {   //Rysowanie kresek pionowych litery "W"
                gotoxy(x+wysokosc/2+3,y+i); cout << "W";
                gotoxy(x+3*wysokosc/2+2,y+i); cout << "W";
        }
        for (int i=0;i<(wysokosc+1)/2;i++) {   //Rysowanie kresek ukosnych litery "W"
                gotoxy(x+wysokosc/2+3+i,y+wysokosc-1-i); cout << "W";
                gotoxy(x+3*wysokosc/2+2-i,y+wysokosc-1-i); cout << "W";
        }
}
void Rysuj3(int wysokosc, int x, int y) {    //Funkcja Rysujaca cyfre "3"
        for (int i=0;i<wysokosc;i++) {       //Rysowanie kreski pionowej cyfry "3"
                gotoxy(x+4*wysokosc/2+3,y+i); cout << "3";
        }
        for (int i=0;i<(wysokosc+1)/2;i++) {  //Rysowanie kresek poziomych cyfry "3"
                gotoxy(x+4*wysokosc/2+3-i,y); cout << "3";
                gotoxy(x+4*wysokosc/2+3-i,y+wysokosc/2); cout << "3";
                gotoxy(x+4*wysokosc/2+3-i,y+wysokosc-1); cout << "3";
        }
}
int RuchX(int x, int k, int wysokosc) {     //Funkcaj odpowiadajaca za rych w poziomie
            if ( k == 75 && x > 1) { x--; return x;}  //ruch w lewo
            else if ( k == 77 && x < 74-4*wysokosc/2+3) {x++; return x;}  //ruch w prawo
            else return x;
}
int RuchY(int y, int k, int wysokosc) {    //Funkcja odpowiadajaca za ruch w pionie
            if ( k == 72 && y > 1) { y--; return y;} // ruch w gore
            else if ( k == 80 && y < 45-wysokosc) {y++; return y;} //ruch w dol
            else return y;
}
void Sprawdz(int x, int y, int wysokosc) {   //Funkcja sprawdzajaca odleglosc od konca ekranu i sygnalizujaca to zmiana koloru czcionki
        if(x < 3 || y < 3 || x > 75-4*wysokosc/2 || y > 43-wysokosc ) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED); //zmiana koloru czcionki na czerwony gdy napis jest bardzo blisko konca ekranu
        else if(x < 6 || y < 6 || x > 72-4*wysokosc/2 || y > 40-wysokosc ) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW); //zmiana koloru czcionki na zolto gdy napis jes blisko konca ekranu
        else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE); //zmiana koloru czcionki na bialo gdy napis jest w odpowiedniej odleglosci od konca ekranu
}
int ZmienWielkosc(int wysokosc, int x, int y, int k) {    //Funkcja zmieniajaca wielkosc napisu "KW3"
        if ( k == 43 && x < 74-4*wysokosc/2 && y < 43-wysokosc ) {wysokosc =  wysokosc+2; return wysokosc;}  //warunki zapobiegajace zwiekszaniu napisu gdy jest on przy krawedzi ekranu
        else if ( k == 45 && wysokosc > 5) {wysokosc=wysokosc-2; return wysokosc;}
        else return wysokosc;
}
void Wstep() {      //Funkcaj wypisujaca opis dzialania programu
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);   //zmiana koloru czcionki na bialy
cout << "\t\t\tDZIALANIE PROGRAMU\n\n";
cout << "\t\tRuch napisu - strzalki\n";
cout << "\t\tZwiekszanie/zmniejszanie napisu - '+'/'-'\n";
cout << "\t\tKoniec programu - 'k'\n\n";
cout << "\t\tNacisnij dowolny klawisz by przejsc dalej";
getch();
}
int main(int argc, char* argv[])
{
        int wysokosc = 13, x = 14, y = 14;
        int k;
        Wstep();
        do {
        clrscr();
        RysujK(wysokosc,x,y);
        RysujW(wysokosc,x,y);
        Rysuj3(wysokosc,x,y);
        k = getch();
        x = RuchX(x,k,wysokosc);
        y = RuchY(y,k,wysokosc);
        wysokosc = ZmienWielkosc(wysokosc,x,y, k);
        Sprawdz(x,y,wysokosc);
        }
        while (k != 'k') ;
        return 0;
        }




