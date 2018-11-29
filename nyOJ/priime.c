#include<stdio.h>
#include<math.h>
int main()                     
{
    int m,i;                   
    scanf("%d",&m);             
    for(i=2;i<=m-1;i++){          
        if(m%i==0)              
            break;
    	} 
        if(i<=m)                 
            printf("no\n");       
        else
            printf("Prime\n");
	return 0;      
} 
