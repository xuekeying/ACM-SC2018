#pragma warning(disable:4786)  
#pragma comment(linker, "/STACK:102400000,102400000")  
#include<iostream>  
#include<cstdio>  
#include<cstring>  
#include<algorithm>  
#include<stack>  
#include<queue>  
#include<map>  
#include<set>  
#include<vector>  
#include<cmath>  
#include<string>  
#include<sstream>  
#include<bitset>  
#define LL long long  
#define FOR(i,f_start,f_end) for(int i=f_start;i<=f_end;++i)  
#define mem(a,x) memset(a,x,sizeof(a))  
#define lson l,m,x<<1  
#define rson m+1,r,x<<1|1  
using namespace std;  
const int INF = 0x3f3f3f3f;  
const int mod = 1e9 + 7;  
const double PI = acos(-1.0);  
const double eps=1e-6;  
const int maxn = 3e6 + 5;  
int dp[maxn][2];  
int sum[maxn] , ans[maxn];  
int main()  
{  
    int T , n , m , k;  
    scanf("%d", &T);  
    while(T--){  
        scanf("%d %d %d", &n , &k , &m);  
        mem(sum , 0);  
        int cnt = 0 , maxv = -1 , x ;  
        dp[0][0] = 1;  
        dp[0][1] = ++cnt;  
        sum[1] = 1;  
        for(int i = 1 ; i < n ; i++){  
            if(i % k == 0){  
                dp[i][0] = 1;  
                dp[i][1] = ++cnt;  
            }  
            else{  
                dp[i][0] = dp[i - i / k - 1][0] + 1;  
                dp[i][1] = dp[i - i / k - 1][1];  
            }  
            ++sum[ dp[i][0]  ] ;  
            maxv = max(maxv , dp[i][0]);  
        }  
        for(int i = 1 ; i <= maxv ; i++){  
            sum[i] = sum[i - 1] + sum[i];  
        }  
        for(int i = 0 ; i < n; i++){  
            ans[ sum[dp[i][0] - 1] + dp[i][1] ] = i + 1;  
        }  
        for(int i = 1 ; i <= m ; i++){  
            scanf("%d", &x);  
            printf("%d\n", ans[x]);  
        }  
    }
    return 0;  
}
