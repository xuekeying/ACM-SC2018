#include"stdio.h"  ///Ҳ����ʹ�� < >
int main()
{
    int n,x,sum;
    while(scanf("%d", &n) != EOF)  /// EOF: end of file  �ļ�������־
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
