#include <bits/stdc++.h>
using namespace std;
int a[50],b[50],f[50];
int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++){
			f[i] = 1;
			for(int j=1;j<i;j++)
				if(a[i] > a[j])	f[i] = max(f[i],f[j+1]);
		}
		for(int i=1;i<=n;i++)
			cout<<f[i]; 
	}
	return 0;
}
