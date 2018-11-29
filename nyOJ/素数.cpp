#include <iostream>  
#include <string>  
#include <ctime>  
#include <vector>
#include<math.h>  
using namespace std;  
//bool isPrime_1( int num );  
//bool isPrime_2( int num );  
void isPrime_3( int num );  
int main()  
{  
                 int test_num =1000000;
                 int tstart ,tstop; //分别记录起始和结束时间  
//                 //测试第一个判断质数函数  
//                 tstart=clock ();  
//                 for(int i= 1;i <=test_num; i++)  
//                                 isPrime_1(i );  
//                 tstop=clock ();  
//                 cout<<"方法(1)时间(ms):" <<tstop- tstart<<endl ;//ms为单位  
//                 //测试第二个判断质数函数  
//                 tstart=clock ();  
//                 for(int i= 1;i <=test_num; i++)  
//                                 isPrime_2(i );  
//                 tstop=clock ();  
//                 cout<<"方法(2)时间(ms):" <<tstop- tstart<<endl ;  
//                 //测试第三个判断质数函数  
                 tstart=clock ();  
                 for(int i= 1;i <=test_num; i++)  
                                 isPrime_3(i );  
                 tstop=clock ();  
                 cout<<"方法(3)时间(ms):" <<tstop- tstart<<endl ;  
                 cout<<endl ;  
                 system("pause" );  
                 return 0 ;  
} 
void isPrime_3( int num )  
{  
                 //两个较小数另外处理  
                 if(num ==2|| num==3 )  
                	cout<<num<<endl;  
                 //不在6的倍数两侧的一定不是质数  
                 if(num %6!= 1&&num %6!= 5)  
                                 return 0 ; 
                 int tmp =sqrt(num);  
                 //在6的倍数两侧的也可能不是质数  
                 for(int i= 5;i <=tmp; i+=6 )  
                                 if(num %i== 0||num %(i+ 2)==0 )  
                                                 return 0 ; 
                 //排除所有，剩余的是质数  
                 return 1 ;  
}
