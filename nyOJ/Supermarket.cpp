#include<iostream> 
#include<utility>  
#include<algorithm>
using namespace std;
struct test{
	int a1,b1;
}t[10010];
int cmp(test a,test b){
	return a.b1>b.b1;
}
int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++)
			cin>>t[i].a1>>t[i].b1;
		sort(t,t+n,cmp);
		int count = 0;
		for(int i=0;i<n;i++){
			if(t[i].b1 == t[i+1].b1){
				if(t[i].a1 >= t[i+1].a1)
					t[i+1].a1 = 0;
				else
					t[i].a1 = 0;
			}			
		}
		int sum = 0;
		for(int i=0;i<n;i++){
			sum += t[i].a1;
		}
		cout<<sum<<endl;
	}
	return 0;
}
