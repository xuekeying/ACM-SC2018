#include"stdio.h"  ///也可以使用 < >
int main()
{
    int n,x,sum;
    while(scanf("%d", &n) != EOF)  /// EOF: end of file  文件结束标志
    {
        sum = 0;
        while(n--)
        {
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum);
    }
    return 0;
}
