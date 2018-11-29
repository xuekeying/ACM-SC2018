#include<iostream>
#include<utility>  
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	while(1){
		int n,sum,count;
		cin>>n;
		if(n == 0)	break;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sum = 0;
		for(int i=0;i<n;i++){
			sum +=a[i]; 
		}
		int c =sum;
		sort(a,a+n,cmp);
		int max = a[0];
		count = 0;
		for(int i=1;i<=c;i++){
			if(sum / i >= max && sum % i == 0){
				count++;
				b[i-1] = sum / i;
			}
		}
		sort(b,b+count,cmp);
		cout<<b[count-1]<<endl;
	}
	return 0;
}
