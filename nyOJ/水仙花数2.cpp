#include<iostream>
using namespace std;
#include<cmath>
int main(){
	int n,i,j,k;
	while(cin>>n){
	i = n / 100;
	j = n % 100 /10;
	k = n % 100 % 10;
	if(n != 0){
		if(n == pow(i,3) + pow(j,3) + pow(k,3)){
			cout<<"Yes"<<endl;
		}
		if(n != pow(i,3) + pow(j,3) + pow(k,3)){
			cout<<"No"<<endl;
		}
	}
	else
		break;
	}
	return 0;
} 
