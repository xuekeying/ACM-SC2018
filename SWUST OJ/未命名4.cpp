#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        int num = 0;
        for (int i = 1; i*i <= n; i++)
        {
            num++;
        }
        printf("%d\n", num);
    }
    return 0;
}
