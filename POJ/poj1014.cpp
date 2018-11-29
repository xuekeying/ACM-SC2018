#include <iostream>  
using namespace std;  
  
int a[7],sum;  
  
int dfs(int cap,int value){  
    int i,temp;  
      
    if(value==sum) return 1;  
  
    for(i=cap;i>=1;i--)  
        if(a[i]){  
            temp=value+i;  
            if(temp<=sum){  
                a[i]--;  
                if(dfs(i,temp)) return 1;  
            }  
        }  
    return 0;  
}  
  
int main(){  
    int flag,i,t;  
    for(t=1;;t++){  
        for(flag=sum=0,i=1;i<=6;i++){  
            scanf("%d",&a[i]);  
            sum+=i*a[i];  
            if(!flag && a[i]) flag=1;  
        }  
          
        if(!flag) break;  
          
        printf("Collection #%d:\n",t);  
  
        if(sum&1){  
            printf("Can't be divided.\n\n");  
            continue;  
        }  
        sum=sum>>1;  
        if(dfs(6,0))  
            printf("Can be divided.\n\n");  
        else  
            printf("Can't be divided.\n\n");  
    }  
    return 0;  
}  
