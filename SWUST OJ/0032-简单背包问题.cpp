#include <iostream>  
using namespace std;  
  
int data[1005]; 
  
int beibao(int weight,int n) 
{  
    if (weight==0) {             
        return 1;  
    }  
    if (n==0&&weight!=0) {     
        return 0;  
    }  
    if (beibao(weight, n-1)==1) {   
        return 1;  
    }  
    return beibao(weight-data[n], n-1); 
}  

int main(int argc, const char * argv[]) {  
    int weight,num;  
    while (cin>>weight>>num) {  
        int i;  
        for (i=1; i<=num; i++) {  
            cin>>data[i];  
        }  
        if(beibao(weight,num)==1)   
            cout<<"YES"<<endl;  
        else  
            cout<<"NO"<<endl;  
    }  
    return 0;  
}  
