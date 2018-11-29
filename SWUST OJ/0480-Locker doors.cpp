//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//		int a[n];
//		for(int i=0;i<n;i++){
//			a[i] = 0;
//		}
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=n;j++){
//				if(j%i == 0){
//					if(a[j] == 0)	a[j] = 1;
//					else a[j] = 0;
////					a[j]=(a[j]==0)?1:0;
//				}
//			}
//		}
//		int m = 0;
//		for(int i=0;i<n;i++){
//			if(a[i] == 1)	m += 1;
//		}
//		cout<<m<<endl;
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        int num = 0;
        for (int i = 1; i*i <= n; i++)
        {
            num++;
        }
        printf("%d\n", num);
    }
    return 0;
}
