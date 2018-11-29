#include<iostream>  
#include<utility>  
#include<algorithm>  
using namespace std;  
typedef pair<int,int>name;  
name arr[10005];  
int cmp(name a,name b){
	return a.second<b.second;
}
int main()  
{  
    int N,n,i,ans,t;  
    cin>>N;  
    while(N--)  
    {  
        cin>>n;  
        for(i=0;i<n;i++)  
            cin>>arr[i].first>>arr[i].second;  
        sort(arr,arr+n,cmp);  
        ans=0,t=-1; 
        for(i=0;i<n;i++){  
            if(t<arr[i].first){
				ans++;
				t=arr[i].second;
			}  
        }  
        cout<<ans<<endl;      
    }  
    return 0;  
}
