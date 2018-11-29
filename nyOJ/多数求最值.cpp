#include<iostream>
using namespace std;
int main()
{
	int i,k,j,temp;      
	int a[5];
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	for(k=0;k<4;k++){       //Ã°ÅÝÅÅÐò
		for(j=0;j<4-k;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
			    a[j]=a[j+1];
				a[j+1]=temp;
				}
		}
	}
	cout<<a[0]<<" "<<a[4]<<endl;
}
