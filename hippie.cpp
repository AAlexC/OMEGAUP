#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 60003
bool C[MAXN];
int P[MAXN];
int n, c, i, j, pos = 0, m = 100000000, s = 0, x;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> c >> n;
	for(i = 1; i <= n; i++){
		cin >> C[i];
		C[n+i] = C[i]; 
	}
	for(i = 1; i <= n * 2; i++) if(not C[i]) P[++pos] = i;
	for(i = 1; i + (c - 1) <= pos; i++){
		s = 0;
		x = i;
		for(j = i+1; j <= i + (c - 1); j++) s += (P[j] - 1) - P[x++]; 
		m = min(s, m);
	}
	cout << m << "\n";
	return 0;
}
