#include<stdio.h>  
int main()  
{  
  int m,n;  
  while(scanf("%d %d",&m,&n)!=EOF)  
{  
  if(m%5==0||m%5==4||m%5==1||n%5==1||n%5==4||n%5==0)//找出谭顺华老师的必胜数字。  
    printf("No\n");  
  else  
    printf("Yes\n");  
}  
  return 0;  
}
