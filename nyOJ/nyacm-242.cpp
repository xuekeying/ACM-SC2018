#include<bits/stdc++.h>
using namespace std;
int main(){
	double n;
	while(cin>>n){
		double result = (pow(n,3)*3.1415926*4) / 3;
		int res = (result+0.5);
		cout<<res<<endl;
	} 
	return 0;
}
