#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string my_mul(string a, string b)//大数乘法 
{
	const int N = a.size() > b.size()?a.size() + 5:b.size() + 5;
	int num1[N], num2[N], num3[2 * N];
	int i, j, mul;
	for(i = a.size() - 1, j = 0; i >= 0; --i, ++j)
		num1[j] = a[i] - '0';
	for(i = b.size() - 1, j = 0; i >= 0; --i, ++j)
		num2[j] = b[i] - '0';
	for(i = 0; i < a.size() + b.size() + 1; ++i)
		num3[i] = 0;

	for(i = 0; i < a.size(); ++i){
		for(j = 0; j < b.size(); ++j){
			num3[i + j] = num1[i] * num2[j] + num3[i + j];
			}
		}
	for(i = 0; i < a.size() + b.size() + 1; ++i){
		if(num3[i] >= 10){
			num3[i + 1] = num3[i + 1] + num3[i] / 10;
			num3[i] = num3[i] % 10;
			}
		}
	--i;
	while(num3[i] == 0)
		--i;
	string res(i + 1, '0');
	for(j = 0; i >= 0; --i, ++j)
		res[j] = num3[i] + '0';
	return res;
}

void my_deal(string &s, int len, int n)//插入小数点 
{
	if(len != 0){
		int num, pos, i;
		num = len * n;
		if(num <= s.size()){
			pos = s.size() - num;
			s.insert(s.begin() + pos, '.');
		}
		else if(num > s.size()){
			reverse(s.begin(), s.end());
			for(i = 0; i < s.size() - num; ++i)
			s.push_back('0');
			s.push_back('.');
			reverse(s.begin(), s.end());
		}
		i = s.size() - 1;
		while(s[i] == '0')
			--i;
		if(s[i] == '.')
			--i;
		s.resize(i + 1);
	}
}
int main(){
	string R, res("1");
	int n;
	int pos, i, len;
	while(cin >> R >> n){
		i = n;
		res = "1";
		pos = R.find('.');
		if(pos == -1){
			len = 0;
		}
		else
			len = R.size() - 1 - pos;	
		if(pos != -1)
			R.erase(pos, 1);
		while(i != 0){
			if(i % 2 == 1)
			res = my_mul(res, R);
			R = my_mul(R, R);
			i = i / 2; 
		}
		my_deal(res, len, n);
		cout << res << endl;
	}
}
