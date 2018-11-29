#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int INF = 0x3f3f3f3f;
int a[50005],lef[50005];

int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int M = -INF,sum = 0;
        for(int i = 1;i <= n; i++) {
            scanf("%d",&a[i]);
            sum += a[i];
            if(sum > M)
                M = sum;
            lef[i] = M; //保存的左串表示第1~i个最大的串之和
            if(sum < 0) //注意负数的情况一定要为0，因为负数相加会更小
                sum = 0;
        }
        M = -INF,sum = 0;
        int ans = -INF;
        for(int i = n;i > 1; i--) { //从右边找右串
            sum += a[i];
            if(sum > M)
                M = sum;
            if(ans < M + lef[i-1]) {  //这里是所求的右串加左串的情况
                ans = M + lef[i-1];
                //printf("%d\n",i);
            }
            if(sum < 0)
                sum = 0;
        }
        printf("%d\n",ans);
    }
    return 0;
}
