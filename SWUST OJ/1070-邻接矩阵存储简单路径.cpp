#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int edge[100][100];
}MGraph;
MGraph g;
int  i, j, n, vis[31],path[31];
char V[31];
void bfs(int x,int y,int cnt)
{
    int i;
    vis[x] = 1;
    path[cnt] = x;
    if (x == y)
    {
        for (i = 0; i <= cnt; i++)
            cout << path[i];
        cout << endl;
    }
    for (i = 0; i < n; i++){
        if (g.edge[x][i] && !vis[i])	bfs(i, y, cnt + 1);
    }
    vis[x] = 0;
}
int main()
{
    int x, y;
    cin >> n >> x >> y;
    for (i = 0; i < n; i++)
    	for (j = 0; j < n; j++)
        	cin >> g.edge[i][j];
    bfs(x,y,0);
    return 0;
}
