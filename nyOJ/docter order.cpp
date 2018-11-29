#include<iostream>  
#include<utility>  
#include<algorithm>
using namespace std;
struct test{
	int a1,b1;
}t[100];
int cmp(test a,test b){
	return a.a1<b.a1;
}
int main(){
	int x1,x2,n,k,b,a[100];
	while(cin>>x1>>x2){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>k>>b;
			t[i].a1 = k*x1 + b;
			t[i].b1 = k*x2 + b;
		}
		sort(t,t+n,cmp);
		for(int i=0;i<n;i++)
			a[i] = t[i].b1;
		int count = 0;
		for(int i = 0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i] > a[j])
					count++;
			}
		}
		cout<<n+count+1<<endl;
	}
	return 0; 
}
