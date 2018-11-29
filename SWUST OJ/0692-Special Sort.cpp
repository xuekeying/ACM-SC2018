#include <bits/stdc++.h>
using namespace std;
#define N 100
int main(){
	string a[N];
	for(int i=0;i<N;i++){
		if(a[i] == ".")	break; 
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	} 
	return 0;
} 
