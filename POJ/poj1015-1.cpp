#include<iostream>
#include<algorithm> 
#include<cstring>  
#include<vector>
#include<cstdio>  
#include<ctype.h>
using namespace std;
int dp[21][801];  
vector<int> path[21][801];
int main(){
	int times = 1;
	int subtraction[201],_plus[201];
	int n,m,i,j,k;
	while(cin>>n>>m && n && m){
		for(i=0;i<m;i++)
			for(j=0;j<801;j++)
				path[i][j].clear();
		memset(dp,-1,sizeof(dp));
		int d,p;
		for(i=0;i<n;i++){
			cin>>d>>p;
			subtraction[i] = d-p;
			_plus[i] = d+p;
		}
		int fix = 20 * m;
		dp[0][fix] = 0;
		for(k = 0; k < n; k++) 
            for(i = m-1; i >= 0; i--){  
                for(j = 0; j < 2*fix; j++){  
                    if(dp[i][j] >= 0){  
                        if(dp[i+1][j+subtraction[k]] <= dp[i][j] + _plus[k]){  
                            dp[i+1][j+subtraction[k]] = dp[i][j] + _plus[k];  
                            path[i+1][j+subtraction[k]] = path[i][j]; 
                            path[i+1][j+subtraction[k]].push_back(k);
							}
						}
					}
				}
        for(i = 0; dp[m][fix+i] == -1 && dp[m][fix-i] == -1; i++);  
        int temp = (dp[m][fix+i] > dp[m][fix-i]) ? i : -i;  
        int sumD = ( dp[m][fix+temp] + temp )/2;  
        int sumP = ( dp[m][fix+temp] - temp )/2;
        cout<<"Jury #"<<times<<endl;
        cout<<"Best jury has value "<<sumD<<" for prosecution and value "<<sumP<<" for defence:"<<endl;
        for(int i = 0;i<m;i++)
        	printf( " %d", path[m][fix+temp][i]+1);
        cout<<endl<<endl;
	}
	return 0;
}
