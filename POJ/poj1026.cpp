#include<string.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const int MAXN=220;
char str[MAXN];//ԭʼ���ַ���
char ans[MAXN];//���ձ任����ַ�������������

int key[MAXN];//һ�α任
int cir[MAXN][MAXN];//ÿ��ѭ���ڳ�Ա��cir[i][j]��ʾ��iΪ��ʼ���任j�κ�Ľ��
int num[MAXN];//ÿ��ѭ���ڳ���
bool vis[MAXN];


int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n,k;
    int cnt;//ѭ���ڸ���
    while(scanf("%d",&n),n)
    {
        for(int i=1;i<=n;i++)scanf("%d",&key[i]);
        memset(vis,false,sizeof(vis));
        memset(num,0,sizeof(num));
        cnt=0;
        for(int i=1;i<=n;i++)//������ѭ����
        {
            if(vis[i]==false)
            {
                vis[i]=true;
                num[cnt]=0;
                int temp=key[i];
                cir[cnt][num[cnt]++]=temp;
                while(!vis[temp])
                {
                    vis[temp]=true;
                    temp=key[temp];
                    cir[cnt][num[cnt]++]=temp;
                }
                cnt++;
            }

        }
        while(scanf("%d",&k),k)
        {
            gets(str);//��һ���ǿո�
            int len=strlen(str);
            for(int i=len;i<=n;i++)str[i]=' ';
            str[n+1]='\0';
            for(int i=0;i<cnt;i++)
              for(int j=0;j<num[i];j++)
              {
                  ans[cir[i][(j+k)%num[i]]]=str[cir[i][j]];
              }
            ans[n+1]='\0';
            printf("%s\n",ans+1);
        }
        printf("\n");
    }
    return 0;
}
