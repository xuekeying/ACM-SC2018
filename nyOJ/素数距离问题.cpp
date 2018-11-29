#include<iostream>
using namespace std; 
#define MAX 1000010  
  
int a[MAX];  
//筛选法建立素数表: 0为素数， 1为非素数   
void buildPrimeTable()  
{   
    a[1]=1;//第0个不用   
    for(int i=2;i*i<MAX;i++)  
        if(!a[i])//不是素数的跳过,如果是素数就记为0  
            for(int j=i*i;j<MAX;j+=i)  
                a[j]=1; //包含因子i的不是素数，标记为1  
}  
  
int main()  
{  
    buildPrimeTable();  
    int n,num,right,left;  
    cin>>n;  
    while(n--)  
    {  
        cin>>num;  
        if(a[num]==0)  
            cout<<num<<" "<<"0"<<endl;  
        else  
        {  
            right=left=num;  
            while(a[right]!=0)  
                right++;  
            while(a[left]!=0&&left>0)  
                left--;  
            if(left==0)//如果超过下线
				cout<<right<<" "<<(right-num)<<endl;  
            else if(right-num>=num-left)
				cout<<left<<" "<<(num-left)<<endl;    
            else  
            	cout<<right<<" "<<(right-num)<<endl;    
        }  
    } 
    return 0;  
}
