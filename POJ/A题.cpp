#include <bits/stdc++.h>  
  
using namespace std;  
  
struct Point{  
    double x,y,z;  
}point[3];  
  
int main(){  
    while(cin>>point[0].x>>point[0].y>>point[0].z){  
        cin>>point[1].x>>point[1].y>>point[1].z;  
        cin>>point[2].x>>point[2].y>>point[2].z;  
        double x,y,z;  
        if(point[0].x <= point[1].x) x = point[1].x;  
        else if(point[0].x >= point[2].x) x = point[2].x;  
        	else x = point[0].x;
			  
        if(point[0].y <= point[1].y) y = point[1].y;  
        else if(point[0].y >= point[2].y) y = point[2].y;  
        	else y = point[0].y;
			  
        if(point[0].z <= point[1].z) z = point[1].z;  
        else if(point[0].z >= point[2].z) z = point[2].z;  
        	else z = point[0].z;
			  
        double dis = (x-point[0].x)*(x-point[0].x)+(y-point[0].y)*(y-point[0].y)+(z-point[0].z)*(z-point[0].z);  
        printf("%.0lf\n",dis);  
    }  
    return 0;  
}
