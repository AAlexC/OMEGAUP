#include <bits/stdc++.h>
using namespace std;
#define OP cin.tie(0); ios_base::sync_with_stdio(0);
#define MAXN 110;
int matriz[110][110];
int m, n, aumenta=0, numero=1, numero2=n*m;
int main(){
	cin >> m >> n;
	matriz[0][0]=1;
	matriz[m-1][n-1] = n*m;
	int numarriba = 0;
	int numabajo = n*m;
	//parte
	int j, j2;
	int fila = 0;
	int fila2 = m-1;
	int col = 1,col2 = n-2;
	j = 1;
	int total = 1;
	int ultimo = 1;
	int F = 0;
		while(numero<=n*m){
			col--;
			fila++;
			numero++;
  		matriz[F][j]=numero;
    while(col>=0 && matriz[fila][col] == 0 && fila<m){
	numero++;
	matriz[fila][col] = numero;
	fila++;
	col--;
    }
    if(j==n-1){
        F++;
        fila = F;
        col = n-1;
    } 
    else {
 	col = j+1;
    fila = 0;
	F = 0;
    j++;
    }
}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
 		cout << matriz[i][j] << " ";
		}
	cout <<"\n";
	}
    return 0;
}
