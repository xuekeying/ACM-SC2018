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
                 int tstart ,tstop; //�ֱ��¼��ʼ�ͽ���ʱ��  
//                 //���Ե�һ���ж���������  
//                 tstart=clock ();  
//                 for(int i= 1;i <=test_num; i++)  
//                                 isPrime_1(i );  
//                 tstop=clock ();  
//                 cout<<"����(1)ʱ��(ms):" <<tstop- tstart<<endl ;//msΪ��λ  
//                 //���Եڶ����ж���������  
//                 tstart=clock ();  
//                 for(int i= 1;i <=test_num; i++)  
//                                 isPrime_2(i );  
//                 tstop=clock ();  
//                 cout<<"����(2)ʱ��(ms):" <<tstop- tstart<<endl ;  
//                 //���Ե������ж���������  
                 tstart=clock ();  
                 for(int i= 1;i <=test_num; i++)  
                                 isPrime_3(i );  
                 tstop=clock ();  
                 cout<<"����(3)ʱ��(ms):" <<tstop- tstart<<endl ;  
                 cout<<endl ;  
                 system("pause" );  
                 return 0 ;  
} 
void isPrime_3( int num )  
{  
                 //������С�����⴦��  
                 if(num ==2|| num==3 )  
                	cout<<num<<endl;  
                 //����6�ı��������һ����������  
                 if(num %6!= 1&&num %6!= 5)  
                                 return 0 ; 
                 int tmp =sqrt(num);  
                 //��6�ı��������Ҳ���ܲ�������  
                 for(int i= 5;i <=tmp; i+=6 )  
                                 if(num %i== 0||num %(i+ 2)==0 )  
                                                 return 0 ; 
                 //�ų����У�ʣ���������  
                 return 1 ;  
}
