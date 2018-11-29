#include<iostream>
#include<cmath>
#include<cstdio>
#define LL long long
using namespace std;
LL gcd(LL a,LL b) {return b==0?a:gcd(b,a%b);}
int main()
{
    LL p,q;
    while (scanf("%lld%lld",&p,&q)!=EOF)
    {
        if (p==0 && q==0) break;
        if (p==0) {puts("0 2");continue;}
        LL t=gcd(p,q);p/=t;q/=t;LL N;
        for (N=2;N<=50000;N++)
        {
            if (N*(N-1)%q==0)
          {
              LL b=N*(N-1)/q*p;
              double thta=sqrt((double)(4*b+1));
              double ans=(1+thta)/2.0;
              if (ans-floor(ans)<1e-7)
              {
                  printf("%lld %lld\n",(long long)ans,(long long)(N-ans));
                  break;
              }
          }
        }
        if (N>50000) puts("impossible");
    }
    return 0;
}
