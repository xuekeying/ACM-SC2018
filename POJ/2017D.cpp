#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long LL;  
const int maxn = 350;  
LL dp[maxn][maxn], vis[maxn];
int n,m,q;
void init()  
{  
    for(int i = 1; i <= n; i++)  
    {  
        vis[i] = 0;  
        for(int j = 1; j <= n; j++)  
            dp[i][j] = 0;  
    }  
}
int main(){
	while(cin>>n>>m>>q){
		init();
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			dp[u][v]++;
		}
		for(int k = 1; k <= n; k++ )  
            for(int st = 1; st <= n; st++)  
                for(int ed =  1; ed <= n; ed++)  
                    dp[st][ed] += dp[st][k] * dp[k][ed];
        for(int i = 1; i <= q; i++)  
        {  
            int u;  
            scanf("%d", &u);  
            if(vis[u] == 0)  
            {  
                vis[u] = 1;  
                for(int st = 1; st <=n; st++)  
                    for(int ed = 1; ed <= n; ed++)  
                        dp[st][ed] -= dp[st][u] * dp[u][ed];  
            }  
            else  
            {  
                vis[u] = 0;  
                for(int st = 1; st <=n; st++)  
                    for(int ed = 1; ed <= n; ed++)  
                        dp[st][ed] += dp[st][u] * dp[u][ed];  
            }  
            int ans = 0;  
            for(int st = 1; st <= n; st++)  
            {  
                if(vis[st]) continue;  
                for(int ed = 1; ed <= n; ed++)  
                {  
                    if(vis[ed]) continue;  
                    if(dp[st][ed] > 0) ans++;  
                }  
            }  
            cout<<ans<<endl;
        }
	}
	return 0;
}
