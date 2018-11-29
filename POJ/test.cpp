#include<stdio.h>
#include<string.h>
int vis[30][30];
int path[30][2];
int s[8][2]={-2,-1,-2,1,-1,-2,-1,2,1,-2,1,2,2,-1,2,1};
int a,b,flag;
void dfs(int x,int y,int ans)
{
	if(ans==a*b)
	{
		flag=1;
		for(int i=0;i<ans;i++)
		{
			printf("%c%d",path[i][0]+'A',path[i][1]+1);
		}
		printf("\n");
	}
	for(int i=0;i<8;i++)
	{
		int m=x+s[i][0];
		int n=y+s[i][1];
		if(m>=0&&m<b&&n>=0&&n<a&&!flag&&!vis[m][n])
		{
			vis[m][n]=1;
			path[ans][0]=m;
			path[ans][1]=n;
			dfs(m,n,ans+1);
			vis[m][n]=0;
		}
	}
}
int main()
{
	int test,kase=1;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d%d",&a,&b);
		memset(vis,0,sizeof(vis));
		memset(path,0,sizeof(path));
		flag=0;
		vis[0][0]=1;
		printf("Scenario #%d:\n",kase++);
		dfs(0,0,1);
		if(!flag) printf("impossible\n");
		printf("\n");
	}
 }
