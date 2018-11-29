#include<iostream>
using namespace std;
struct atest{
	int start,end;
};
int main(){
	int n,count=1,temp;
	cin>>n;
	struct atest t1[n];
	int a[2];
	for(int i=0;i<n;i++){
		cin>>t1[i].start>>t1[i].end;
		a[i] = t1[i].end;
	}
	for(int k=0;k<n-1;k++){       //Ã°ÅİÅÅĞò
		for(int j=0;j<n-1-k;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
			    a[j]=a[j+1];
				a[j+1]=temp;
				}
		}
	}
	//
	for(int i=0;i<n-1;i++){
		if(t1[i+1].start > t1[i].end){
			count++;
		}
		else{
			
		}
	}
	return 0;
} 

