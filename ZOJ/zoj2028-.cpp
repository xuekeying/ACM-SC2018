#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
char m[108], n[108];
int a, b;

int get( char * s){
	int l = strlen(s);
	if(l > 3){
		l = atoi(&s[l-3]);	//把字符串转换成整型数的一个函数
	} else {
		l = atoi(s);
	}
	return l;
}

void fun(){
	if(strcmp(m,"1") == 0){
		printf("%s\n", n);
	} else if(strcmp(n,"1")==0){
		printf("%s\n", m);
	} else {
		a = get(m);
		b = get(n);
		int t = a * b % 8;
		if(t > 4)
			t -= 4;
		if(t == 0){
			printf("Yes\n");
			return;
		}
		printf("%d\n", t);
	}
}

int main(){
	while(scanf("%s%s",&m,&n) > 0 )
		fun();
	return 0;
}
