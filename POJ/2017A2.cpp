#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n,m;
    while(~scanf("%lld%lld",&n,&m)){
        if(n == -9223372036854775808 && m == -1) puts("9223372036854775808");
        else{
            if(n >= 0&&m >= 0||n <= 0&&m <= 0)
                printf("%lld\n",n/m);
            else{
                if(abs(n)%abs(m) == 0)
                    printf("%lld\n",n/m);
                else printf("%lld\n",n/m-1);
            }
        }
    }
    return 0;
}
