#include<iostream>
#include<utility>  
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int w,n,m;
	cin>>m;
	while(m--){
		cin>>w>>n;
		int a[n],count=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			if(a[i]+a[n-1] > w){
				count++;
			}
			else{
				count++;
				n -=1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
