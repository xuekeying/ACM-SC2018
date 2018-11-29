#include <iostream>
#include<time.h>  
  
using namespace std;  
  
int main()  
{  
    int t,n;
	double st,en;
	st = clock();
	cin >> t;  
    while(t--)  
    {  
     for(int i=1;i<=t;i++)  
     {  
      cin>>n;  
      for(int j=2;j*j<=n;j++)  
      {  
       if(n%j==0)  
        {  
         while(n%j==0)  
         {  
          n=n/j;  
          if(n!=1)  
          cout<<j<<"*";  
          else  
          cout<<j;  
         }  
        }  
      }  
      if(n>1)  
       cout<<n<<endl;  
     }  
    }
	en = clock();
	printf("%lf",(en-st));  
    return 0;  
} 
