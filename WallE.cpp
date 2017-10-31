#include <iostream>
using namespace std;
int Mapa[5][5], i = 0, j = 0, x, y, n, instruccion, orientado = 4, esferas = 1;

int cambiaOrientacion(int instruccion, int orientado) {
  if( instruccion == 3) {
    if(orientado == 1 ) orientado = 3;
    else if(orientado == 2) orientado = 4;
    else if(orientado == 3) orientado = 2;
    else if(orientado == 4) orientado = 1;
  }
  else if(instruccion == 4) {
    if(orientado == 1 ) orientado = 4;
    else if(orientado == 2) orientado = 3;
    else if(orientado == 3) orientado = 1;
    else if(orientado == 4) orientado = 2;
  }
  return orientado;
}

int main () {
  cin.tie(0); ios_base::sync_with_stdio(0);
  cin >> n;
  Mapa[4][0] = 1, i = 4, j = 0;
  x = j;
  y = i;
  orientado = 4;
  while(n--) {
    cin >> instruccion;
    orientado = cambiaOrientacion(instruccion, orientado);
      if(instruccion == 1 && orientado == 1) {
        x = j;
        y = i - 1;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        i--;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }
      else if(instruccion == 2 && orientado == 1) {
        x = j;
        y = i + 1;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        i++;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }

      if(instruccion == 1 && orientado == 2) {
        x = j;
        y = i + 1;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        i++;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }
      else if(instruccion == 2 && orientado == 2) {
        x = j;
        y = i - 1;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        i--;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }

      if(instruccion == 1 && orientado == 3) {
        x = j - 1;
        y = i;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        j--;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }
      else if(instruccion == 2 && orientado == 3) {
        x = j + 1;
        y = i;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        j++;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }

      if(instruccion == 1 && orientado == 4) {
        x = j + 1;
        y = i;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        j++;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }
      else if(instruccion == 2 && orientado == 4) {
        x = j - 1;
        y = i;
        if(x < 0 || x > 4 || y < 0 || y > 4) { esferas = 0; break; }
        j--;
        if(!Mapa[y][x]) esferas++;
        Mapa[i][j] = 1;
      }
  }
  cout << esferas << "\n";
  return 0;
}
