#include<string.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const int MAXN=220;
char str[MAXN];//原始的字符串
char ans[MAXN];//最终变换后的字符串，即输出结果

int key[MAXN];//一次变换
int cir[MAXN][MAXN];//每个循环节成员，cir[i][j]表示以i为开始，变换j次后的结果
int num[MAXN];//每个循环节长度
bool vis[MAXN];


int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n,k;
    int cnt;//循环节个数
    while(scanf("%d",&n),n)
    {
        for(int i=1;i<=n;i++)scanf("%d",&key[i]);
        memset(vis,false,sizeof(vis));
        memset(num,0,sizeof(num));
        cnt=0;
        for(int i=1;i<=n;i++)//求所有循环节
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
            gets(str);//第一个是空格
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
