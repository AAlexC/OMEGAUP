#include <bits/stdc++.h>
using namespace std;

int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};

#define MAXN 114
bool visitado[MAXN][MAXN];
char mapa[MAXN][MAXN];
int X, Y, N;
	struct estado{	int x; int y; int pasos; int lobos;		}; 
	
 	int bfs(int X, int Y, int lobos){
 		queue <estado> cola;
 		  estado inicia;
 		   inicia.x = X;
 		   inicia.y = Y;
 		   inicia.pasos = 0;
 		   inicia.lobos = lobos;
 		   cola.push(inicia); 		 
 		 while(!cola.empty()){
 		 	estado grafo = cola.front();
 		 	  cola.pop();
				if(mapa[grafo.x][grafo.y]=='S'){
				return grafo.pasos;
				}	
			if(visitado[grafo.x][grafo.y]) continue;//Podamos
			 visitado[grafo.x][grafo.y]=true;
			for(int i=0; i < 4;i++){
			int addGrafoX = grafo.x + dx[i];
			int addGrafoY = grafo.y + dy[i];
			
			if(visitado[addGrafoX][addGrafoY]) continue;
 			
			if(addGrafoX >= 0 && addGrafoX < N &&addGrafoY >= 0 && addGrafoY < N && mapa[addGrafoX][addGrafoY]!='#' && grafo.lobos>=0){
			 
			if(mapa[addGrafoX][addGrafoY]=='*'){
						estado adyacente;
						adyacente.x = addGrafoX;
						adyacente.y = addGrafoY;
						adyacente.pasos = grafo.pasos+1;
						adyacente.lobos = grafo.lobos-1;
						cola.push(adyacente);
		} else {
				estado adyacente;
						adyacente.x = addGrafoX;
						adyacente.y = addGrafoY;
						adyacente.pasos = grafo.pasos+1;
						adyacente.lobos = grafo.lobos;
						cola.push(adyacente);
		}
			   }
			}
		  }
 	return -1;//No hay solución 	
	 }
	 
int main(){
	
	cin.tie(0); ios_base::sync_with_stdio(0);
	int lobos;
	cin >> lobos;
	cin >> N; 
int entradaX, entradaY;

	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
		  cin >> mapa[i][j];
		         if(mapa[i][j]=='E'){
				   entradaX = i;
				   entradaY = j;
				 }     
		}	
	}
cout <<	bfs(entradaX, entradaY, lobos);		
 return 0;	
}
