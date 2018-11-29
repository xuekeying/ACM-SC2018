#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int main(){
	int arr1[50005],arr2[50005],a[50005],maxsum,sum,t,n;
	cin>>t;
	while(t--){
		memset(arr1,0,sizeof(arr1));  
        memset(arr2,0,sizeof(arr2));  
        memset(a,0,sizeof(a));
        cin>>n;
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	sum = 0,maxsum = INT_MIN;
        	sum  += a[i];
        	if(sum>maxsum)  
                maxsum=sum;  
            if(sum<0)  
                sum=0;  
            arr1[i]=maxsum;
		}
		sum = 0,maxsum = INT_MIN;
		for(int i=n-1;i>=0;i--)  
        {  
            sum+=a[i];  
            if(sum>maxsum)  
                maxsum=sum;  
            if(sum<0)  
                sum=0;  
            arr2[i]=maxsum;  
        }
        maxsum=INT_MIN;
        for(int i=0;i<n-1;i++)
            if(arr1[i] + arr2[i+1] > maxsum)  maxsum=arr1[i]+arr2[i+1];  
		cout<<maxsum<<endl;
	}
	return 0;
}
