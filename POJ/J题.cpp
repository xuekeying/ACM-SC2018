#include<iostream>
using namespace std;
struct node{
	long t,l,r,d;
}test[100010];
int main(){
	int n,q,t,l,r,d;
	cin>>n>>q;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = i * n + j;
		}
	}
	
	for(int i=0;i<q;i++){
		cin>>test[i].t>>test[i].l>>test[i].r>>test[i].d;
	}
	
	int x,y;
	for(int i=0;i<n;i++){
		while(test[i].t == 1){
			if(test[i].l == test[i].r)	x = test[i].l;
			a[x][i] = a[] 
		}
	}
} 
