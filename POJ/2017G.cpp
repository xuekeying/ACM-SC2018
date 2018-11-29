#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
	LL a,b,c,d,s1,s2;
	while(cin>>a>>b>>c>>d){
		if(a == 0 && b == 0 && c == 0 && d == 0)	break;
		s1 = b / 2017 - (a-1) / 2017;
		s2 = d / 2017 - (c-1) / 2017;
		cout<<s1*(d-c+1)+s2*(b-a+1)-s1*s2<<endl;
	}
	return 0;
}

