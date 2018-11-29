//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//	int a,b,s,m,n;
//	while(cin>>a>>b>>s>>m>>n){
//		if(a == 0 && b == 0 && s == 0 && m == 0 n == 0)	break;
//		
//	}
//}
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>  
int main(){  
    int a, b, s, m, n;  
    double pi = 3.141592653;  
    while (scanf("%d%d%d%d%d", &a, &b, &s, &m, &n), a || b || s || m || n)  
    {  
        double leap = 1.0 * n * b / (m * a);  
        double t = atan(leap);  
        double v = (1.0 * n * b) / (sin(t) * s);  
        t = t / pi * 180;  
        printf("%.2lf %.2lf\n", t, v);  
    }  
    return 0;  
}
