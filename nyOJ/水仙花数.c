#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	int a,i,j,k,f1,f2;
	while((scanf("%d %d",&m,&n))!= EOF){
			f1 = n-m+1;
			f2 =0;
			for(a = m; a <= n; a++){
				i = a / 100;
				j = (a % 100) / 10;
				k = (a % 100) % 10;
			if(a == pow(i,3) + pow(j,3) + pow(k,3)){
				if(f2 == 0)	printf("%d ",a);
				if(f2 == 1) printf("%d ",a);
				f2 = 1;
			}
			else f1--;
		}
			if(f1 == 0) printf("no\n");
			else printf("\n");
		if(m==0&&n==0) break;
	}
	return 0;
} 
