#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
	LL n,m;
	while(cin>>n>>m){
		if(n == 0 && m == 0)	break;
		if(n == -9223372036854775808ULL && m == -1) cout<<"9223372036854775808"<<endl;
		else{
			if(n >= 0&& m >= 0 || n <= 0&&m <= 0)	cout<<n/m<<endl;
			else{
				if(abs(n) % abs(m) == 0)	cout<<n/m<<endl;
				else cout<<n/m-1<<endl;
			}
		}
	}
	return 0;
}

