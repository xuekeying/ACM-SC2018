#include<iostream>
#include<math.h>
using namespace std;
struct node{
	double x,y;
}t[100];
int main(){
	int n,N[100];
	double x,y;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>t[i].x>>t[i].y;
		}
		for(int i=0;i<n;i++){
			N[i] = ceil(3.14*(t[i].x*t[i].x+t[i].y*t[i].y) / 100);
		}
		for(int i=0;i<n;i++){
		cout<<"Property "<<i+1<<": This property will begin eroding in year "<<N[i]<<"."<<endl;
		}
		cout<<"END OF OUTPUT."<<endl;
	}
	return 0;
}
