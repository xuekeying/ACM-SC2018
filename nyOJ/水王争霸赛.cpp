#include<iostream>
#include<time.h>  
using namespace std;  
  
struct st{  
    char ID[20];  
    long long int num;  
}tt[1000];  
  
int main()  
{  
double st,en;
st =clock();
    int N,i=0;  
    cin>>N;  
    int M=N;  
    while(N)  
    {  
        cin>>tt[i].ID>>tt[i].num;  
        N--;  
        i++;  
    }  
    struct st K;  
      
    for(int j=1;j<M;j++)  
    {  
        for(int i=0;i<M-j;i++)  
        {  
            if(tt[i].num>tt[i+1].num)  
            {K=tt[i];tt[i]=tt[i+1];tt[i+1]=K;}  
        }  
    }  
      
     
   for(int i=0;i<M;i++)  
   {  
    cout<<tt[i].ID<<" "<<tt[i].num<<endl;  
   }  
     
  en = clock();
  printf("%d",(en-st));
return 0;  
}
