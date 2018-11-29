#include<bits/stdc++.h>
using namespace std;  
int main()  
{  
  int parent[1000],i,a,b,num=1,max,flag;  
    
  while(scanf("%d%d",&a,&b)&&(a+b>=0))  
  {  
    if(a==0&&b==0)  
    {  
      printf("Case %d ",num);  
      num++;  
      printf("is a tree.\n");  
    }  
    memset(parent,-1,sizeof(parent));  
    if(parent[a]==-1)  parent[a]=0;  
    if(parent[b]==-1)   
    {  
      parent[b]=1;  
    }  
    else  
    {  
      parent[b]++;  
    }  
    max=0;  
    if(a>max)  max=a;  
    if(b>max)  max=b;  
      
    while(scanf("%d%d",&a,&b)&&(a+b>0))  
    {  
      if(parent[a]==-1)  parent[a]=0;  
      if(parent[b]==-1)  
      {  
        parent[b]=1;  
      }  
      else  
      {  
        parent[b]++;  
      }  
      if(a>max)  max=a;  
      if(b>max)  max=b;  
    }  
    flag=0;  
    for(i=1;i<=max;i++)  
    {  
      if(flag==2) break;  
      if(parent[i]!=-1)  
      {  
         if(parent[i]>1)  
         {  
           flag=2;  
           break;  
         }  
         else if(parent[i]==0)  
         {  
           flag++;  
         }  
           
      }  
    }  
    if(flag==1)  
    {  
      printf("Case %d ",num);  
      num++;  
      printf("is a tree.\n");  
    }  
    else  
    {  
      printf("Case %d ",num);  
      num++;  
      printf("is not a tree.\n");  
    }  
  }  
  return 0;  
}
