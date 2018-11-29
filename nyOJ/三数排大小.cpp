#include<iostream>
using namespace std;
int main(){
	int i,k,j,temp;      
	int a[3];
	for(i=0;i<3;i++){
		cin>>a[i];
	}
	for(k=0;k<2;k++){       //Ã°ÅÝÅÅÐò
		for(j=0;j<2-k;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
			    a[j]=a[j+1];
				a[j+1]=temp;
				}
		}
	}
	for(i=0;i<3;i++)
		cout<<a[i]<<" ";
		cout<<endl;
} 
