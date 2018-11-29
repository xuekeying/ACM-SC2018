#include<iostream>
using namespace std;
int main(){
	int N,k,n;
	int a[100],b[100];
	cin>>n;
	while(n--){
		cin>>N>>k;
		int sum = N,c = N;
		for(int i=0;i<c;i++){
			a[i] = N / k;
			b[i] = N % k;
			sum+=a[i];
			N = a[i] + b[i];
			if(a[i] == 0)	break;
		}
	cout<<sum<<endl;
	}
	return 0;
}

