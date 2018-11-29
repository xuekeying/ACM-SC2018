#include<bits/stdc++.h>
using namespace std;
#define M 110
#define N 10010
int main(){
	int dp[M],a[M],T;
	cin>>T;
	while(T--){
		int m,n;
		cin>>m>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			dp[i] = dp[i-1]+pow((double)(m-a[i]),2);
			int sum = a[i];
			for(int j=i-1;j>0&&m-sum>0;j--){
				sum += (a[j] + 1);
				if(m - sum >= 0)
					dp[i] =min(dp[i],dp[j-1]+(int)pow((double)(m-sum),2));
			}
		}
		cout<<dp[n]<<endl;
	}
	return 0;
}
