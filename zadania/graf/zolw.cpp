//const float pi = 3.1415926536;
float kat = 0;
int pisac;
//------------------------------------------------------
void np(float n)
{
  int x0, y0;
  float wx, wy;
  wx = n*cos(kat*pi/180);
  wy = n*sin(kat*pi/180);
  if (wx >= 0)  x0 = floor(wx + 0.5);
    else x0 = ceil(wx - 0.5);
  if (wy >= 0)  y0 = floor(wy + 0.5);
    else y0 = ceil(wy - 0.5);
  if (pisac) linerel(x0,y0);
    else moveto(x0,y0);
}
//------------------------------------------------------
void ws(float n)
{
  np(-n);
}
//------------------------------------------------------
void lewo(float obrot)
{
  kat -= obrot;
}
//------------------------------------------------------
void prawo(float obrot)
{
  kat += obrot;
}
//------------------------------------------------------
void inicjalizacja_zolwia()
{
//  lewo(90);
  moveto(getmaxx()/2, getmaxy()/2);
  pisac = 1;
}
//------------------------------------------------------
void pod()
{
  pisac = 0;
}
//------------------------------------------------------
void opu()
{
  pisac = 1;
}
