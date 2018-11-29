#include<bits/stdc++.h>
using namespace std;
int main(){
	int p[1000],i,a,b,max,num = 1,flag;
	while(scanf("%d%d",&a,&b)&&(a+b>0)){
		if(a == 0 && b == 0){
			cout<<"Case "<<num<<" ";
			num++;
			cout<<"is a tree."<<endl;
		}
		memset(p,-1,sizeof(p));
		if(p[a] == -1)	p[a] = 0;
		if(p[b] == -1){
			p[b] = 1;
		}
		else{
			p[b]++;
		}
		max = 0;
		if(a>max)	max = a;
		if(b>max)	max = b;
		while(scanf("%d%d",&a,&b)&&(a+b>0)){
			if(p[a] == -1)	p[a] = 0;
			if(p[b] == -1){
				p[b] = 1;
			}
			else{
				p[b]++;
			}
			if(a>max)	max = a;
			if(b>max)	max = b;
		}
		flag = 0;
		for(i=1;i<=max;i++){
			if(flag == 2)	break;
			if(p[i] != -1){
				if(p[i] > 1){
					flag = 2;
					break;
				}
				else if(p[i] == 0){
					flag++;
				}
			}
		}
		if(flag == 1){
			cout<<"Case "<<num<<" ";
			num++;
			cout<<"is a tree."<<endl;
		}
		else{
			cout<<"Case "<<num<<" ";
			num++;
			cout<<"is not a tree."<<endl;
		}
	}
	return 0;
}
