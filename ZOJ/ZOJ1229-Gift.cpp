#include<iostream>
#include<cstring>
using namespace std;

int n,m;
bool x[50];

void search(int i,int pos)
{
  if(pos<=0||pos>=n+1)
    return;
  x[pos]=true;
  search(i+1,pos+(2*i-1));
  search(i+1,pos-(2*i-1));
}

int main()
{
  while(cin>>n>>m)
  {
    if(n==0&&m==0)
      break;
    if(n>=50)
    {
      cout << "Let me try!" << endl; continue;
    }
    memset(x,false,sizeof(x));
    search(2,1);
    if(x[m])
      cout << "Let me try!" << endl;
    else 
      cout << "Don't make fun of me!" << endl;
  }
  return 0;
}
