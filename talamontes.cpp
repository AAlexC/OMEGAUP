#include <iostream>
#include <algorithm>
using namespace std;
long long int A[1000002], n, m, t, c = 0, i; 
int main(){
	cin.tie(0);	ios_base::sync_with_stdio();
	cin >> n >> m;
	if(m == 0){
		cout << 0 << "\n";
		return 0;
	}
	for(i = 0; i < n; i++) cin >> A[i];
	sort(A, A+n);
	t = A[n-1];
	c = 0;
	while(c < m){
		for(i = n - 1; i < n && A[i] > t && c < m; i--)	c += A[i] - t;  
			if(c < m){
			c = 0;
			t--;
			}
	}
	cout << t << "\n";
	return 0;
}
