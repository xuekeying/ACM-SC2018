#include<iostream>
using namespace std; 
#define MAX 1000010  
  
int a[MAX];  
//ɸѡ������������: 0Ϊ������ 1Ϊ������   
void buildPrimeTable()  
{   
    a[1]=1;//��0������   
    for(int i=2;i*i<MAX;i++)  
        if(!a[i])//��������������,����������ͼ�Ϊ0  
            for(int j=i*i;j<MAX;j+=i)  
                a[j]=1; //��������i�Ĳ������������Ϊ1  
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
            if(left==0)//�����������
				cout<<right<<" "<<(right-num)<<endl;  
            else if(right-num>=num-left)
				cout<<left<<" "<<(num-left)<<endl;    
            else  
            	cout<<right<<" "<<(right-num)<<endl;    
        }  
    } 
    return 0;  
}
