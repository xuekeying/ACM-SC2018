#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int vis[30][30];
int path[30][2];
int s[8][2] = {-2,-1,-2,1,-1,-2,-1,2,1,-2,1,2,2,-1,2,1};
int a,b,flag;

void dfs(int x,int y,int ans){
	if(ans == a*b){
		flag = 1;
		for(int i=0;i<ans;i++){
			cout.put(path[i][0]+'A');
			cout<<path[i][1]+1;
		}
		cout<<endl;
	}
	for(int i=0;i<8;i++){
		int m = x+s[i][0];
		int n = y+s[i][1];
		if(m>=0&&m<b&&n>=0&&n<a&&!flag&&!vis[m][n]){
			vis[m][n]=1;
			path[ans][0]=m;
			path[ans][1]=n;
			dfs(m,n,ans+1);
			vis[m][n]=0;
		}
	}
}

int main(){
	int t,k = 1;	//k代表第几个测试数据 
	cin>>t;
	while(t--){
		cin>>a>>b;	//a代表横行，b代表纵列
		memset(vis,0,sizeof(vis));
		memset(path,0,sizeof(path));
		flag = 0;
		vis[0][0] = 1;
		cout<<"Scenario #"<<k++<<":"<<endl;
		dfs(0,0,1);
		if(!flag)	cout<<"impossible"<<endl;
		cout<<endl; 
	}
	return 0;
}
