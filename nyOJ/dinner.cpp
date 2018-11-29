#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string str;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>str;
			if(str == "bowl" || str == "knife" || str == "fork" || str == "chopsticks")
				cout<<str<<" "<<endl;;
		}
	}
	cout<<endl;
	return 0;
} 
