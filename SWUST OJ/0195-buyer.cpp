#include<iostream>  
#include<string.h>  
using namespace std;  
struct buy  
{  
    int money;  
    int value;  
    int a[100];//���ڼ�¼�Ƿ�ʹ��  
}dp[1001];  
int main()  
{  
    int i, j, limit_money, m, v, n;  
    while (cin >> limit_money >> n)  
    {  
        memset(dp, 0, sizeof(dp));  
        for (i = 0; i<n; i++)  
        {  
            cin >> m >> v;  
            for (j = limit_money; j >= m; j--)  
                if (dp[j].value<dp[j - m].value + v)//״̬ת�ƣ��Ѹ߼�ֵ�����Ļ��ͼ�ֵ������  
                {  
                    dp[j] = dp[j - m];  
                    dp[j].a[i] = 1;  
                    dp[j].value += v;  
                }  
        }  
        if (dp[limit_money].value == 0)  
        {  
            cout << "0" << endl;  
            continue;  
        }  
        cout << dp[limit_money].value << endl;  
        int t = 0;  
        for (i = 0; i < n; i++)  
        {  
            if (dp[limit_money].a[i] == 1)  
            {  
                if (t)cout << " ";  
                cout << i + 1 ;  
                t = 1;  
            }  
        }  
        cout <<endl;  
    }  
    return 0;  
}  
