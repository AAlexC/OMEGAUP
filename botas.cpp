#include <iostream>
#include <algorithm>
using namespace std;
int botas[1000010];
int botasN[1000010];
int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int n,t,aux,t2=0;
    cin>>n;
    t=n;
    for(int i=0;i<n;i++){
      cin>>aux;
      if(aux<0){
        aux=abs(aux);
        botasN[aux]++;
        if(botasN[aux]>=2 && botasN[aux]%2==0) t2++;
            } else {
            botas[aux]++;
            if(botas[aux]>=2 && botas[aux]%2==0) t2++;
      }
    }
    cout<<t-t2*2;
    return 0;
}
