#include<bits/stdc++.h>
using namespace std;
set<int>s;
set<int>::iterator it;
int b[105][105],p[105][105],m[105];
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		s.clear();
		for(int i=0;i<n;i++){
			cin>>m[i];
			for(int j=0;j<m[i];j++){
				cin>>b[i][j]>>p[i][j];
				s.insert(b[i][j]);
			}
		}
		double rate = 0;
		for(it=s.begin();it!=s.end();it++){
			int k = *it,sum_price = 0;
			for(int i=0;i<n;i++){
				int min_price = 0x3fffff;
				for(int j=0;j<m[i];j++){
					if(b[i][j] >= k && p[i][j] < min_price){
						min_price = p[i][j];
					}
				}
				sum_price += min_price; 
			}
			if(k * 1.0 / sum_price > rate)  rate = k * 1.0 / sum_price;
		}
		printf("%.3lf\n",rate);
	}
	return 0;
}
