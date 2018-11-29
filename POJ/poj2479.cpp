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
            lef[i] = M; //������󴮱�ʾ��1~i�����Ĵ�֮��
            if(sum < 0) //ע�⸺�������һ��ҪΪ0����Ϊ������ӻ��С
                sum = 0;
        }
        M = -INF,sum = 0;
        int ans = -INF;
        for(int i = n;i > 1; i--) { //���ұ����Ҵ�
            sum += a[i];
            if(sum > M)
                M = sum;
            if(ans < M + lef[i-1]) {  //������������Ҵ����󴮵����
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
