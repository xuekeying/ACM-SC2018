#include <bits/stdc++.h>
using namespace std;
#define N 100005
#define MAX (1<<31)-1
#define LL long long int

int n,p;
int data[N],vis[N];
LL sum1,sum2,pos;
map<int,int> m;

int main(){
	while(cin>>n>>p){
		for(int i=0;i<n;i++){
			cin>>data[i];
		}
		m.clear();
		memset(vis,0,sizeof(vis));
		sum1 = sum2 = pos = 0;
		for(int i=0;i<p;i++){
			int x;
			cin>>x;
			if(vis[x] == 0){
				sum1 += data[x]*data[x];
				sum2 += data[x];
				vis[x] = 1;
				pos++;
				m[data[x]]++;
			}
			else{
				sum1 -= data[x]*data[x];
				sum2 -= data[x];
				vis[x] = 0;
				pos--;
				m[data[x]]--;
				if(m[data[x]] == 0){
					m.erase(m.find(data[x]));
				}
			}
			if(pos == 0) cout<<"0 0"<<endl;
			else{
				int Min = m.begin() ->first;
				int Max = (--m.end()) ->first;
				cout<<(Max-Min)*pos<<" "<<sum1*pos-(sum2*sum2)<<endl;
			}
		}
	}
	return 0;
}
