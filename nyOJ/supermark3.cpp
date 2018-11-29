#include<cstdio>  
#include<algorithm>  
#include<queue>  
using namespace std;  
  
const int N = 10005;  
struct Node{  
    int px, dx;  
    friend bool operator<(const Node&a,const Node&b){  
        return a.dx>b.dx;  
    }  
}arr[N];  
  
priority_queue<int,vector<int>,less<int> >q;  
  
int n;  
  
int main(){  
    while(~scanf("%d",&n)){  
        int maxTime=0;  
        for(int i=0; i<n; ++i){  
            scanf("%d%d",&arr[i].px, &arr[i].dx);  
            if(arr[i].dx>maxTime) maxTime = arr[i].dx;  
        }  
        sort(arr,arr+n);  
        int ans = 0, pos=0;;  
        while(!q.empty()) q.pop();  
        for(int t=maxTime; t>=1; --t){  
            while(pos<n&&arr[pos].dx>=t){  
                q.push(arr[pos++].px);  
            }   
            if(!q.empty()){  
                ans += q.top();  
                q.pop();  
            }  
        }  
        printf("%d\n", ans);  
    }  
    return 0;  
} 
