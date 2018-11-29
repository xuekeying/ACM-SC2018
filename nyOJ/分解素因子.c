#include<stdio.h>
#include<time.h>
int main(){
	int n,k,i;
	double st,en;
	st = clock();
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		for(i=2;i<k;i++){
			if(k%i == 0){
				printf("%d",i);
				k /= i;
				if(k>1) printf("*");
			}
		}
		if(k>1) printf("%d",k);
		printf("\n");
	}
	en = clock();
	printf("%lf",(en-st));
	return 0;
}

