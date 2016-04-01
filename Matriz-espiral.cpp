#include <bits/stdc++.h>
using namespace std;
int matriz[110][110];
int f,c;

int espiral(int M){
int auxI=1, auxJ=1,numero=1;
  while(numero<=M){
    while(auxI<=f && auxJ<=c && matriz[auxI][auxJ]==0){
    matriz[auxI][auxJ]=numero;
      if(numero==M) return 0;
      auxJ++;
      numero++;
    }
    auxJ--;
    auxI++;
    while(auxI<=f && auxJ<=c && matriz[auxI][auxJ]==0){
     matriz[auxI][auxJ]=numero;
      if(numero==M) return 0;
      auxI++;
      numero++;
    }
    auxI--;
    auxJ--;
    while(auxI<=f && auxJ>0 && auxJ<=c && matriz[auxI][auxJ]==0){
    matriz[auxI][auxJ]=numero;
      if(numero==M) return 0;
      auxJ--;
      numero++;
    }
       auxJ++;
       auxI--;
    while(auxI<=f && auxJ<=c && matriz[auxI][auxJ]==0){
    matriz[auxI][auxJ]=numero;
      if(numero==M) return 0;
      auxI--;
      numero++;
    }
     auxI++;
     auxJ++;
  }
}
int main(){
   cin.tie(0); ios_base::sync_with_stdio(0);
   cin >> f >> c;
   espiral(f*c);
   for(int i=1;i<=f;i++){
    for(int j=1;j<=c;j++){
     cout << matriz[i][j] << " ";
    }
    cout << "\n";
   }

 return 0;
}
