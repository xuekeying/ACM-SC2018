#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	while(cin>>str){
		int n = str.length(),a,b,c,d;
		if(getchar() == '\n'){
			for(int i=0;i<n;i++){
				if(str[i] == 'Z'){
					 a = 1;
					 break;
				}
				a = 0;
			}
			for(int i=0;i<n;i++){
				if(str[i] == 'Y'){
					 b = 1;
					 break;
				}
				b = 0;
			}
			for(int i=0;i<n;i++){
				if(str[i] == 'C'){
					 c = 1;
					 break;
				}
				c = 0;
			}
			for(int i=0;i<n;i++){
				if(str[i] == 'Y'){
					if(str[i+1] == 'Y'){
						d = 1;
						break;
					}	
				}
			}
			if(a == 1 && b == 1 && c == 1)	cout<<"^v^"<<endl;
			if( a+b+c != 3 || d ==1) cout<<"= ="<<endl;
	}
}
return 0;
}
