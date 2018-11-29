#include <iostream>  
#include <algorithm>  
#include <cmath>  
using namespace std;  
int ans;  
double base;  
double maxd;  
struct node  
{  
    double st,end,x,r;  
}data[10022];  
double cal(double x,double z)  
{  
    double m;  
    m=sqrt(x*x-z*z);  
    return m;  
}  
int main()  
{  
    int n,u; 
    double w,h;  
    double t;  
    cin>>u; 
    while (u--)  
    {  
       	cin>>n>>w>>h;  
        h/=2;  
        for (int i=0;i<n;i++)  
        {  
        	cin>>data[i].x>>data[i].r; 
            t=cal(data[i].r,h);  
            data[i].st=data[i].x-t;  
            data[i].end=data[i].x+t;  
        }  
        base=0;  
        ans=0;  
        for (int i=0;i<n;i++)  
        {  
            if (base>=w)  
                break;  
            else  
            {  
                maxd=0;  
                for (int j=0;j<n;j++)  
                {  
                    if (data[j].st<=base)  
                    {  
                        if (data[j].end>maxd)  
                            maxd=data[j].end;  
                    }  
                }  
                base=maxd;  
                ans++;  
            }  
        }  
        if (base<w)      //考虑是否能完全覆盖
			cout<<"0"<<endl;  
        else  
        	cout<<ans<<endl;
    }  
    return 0;  
}
