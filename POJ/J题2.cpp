#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int N=201;
struct Mnode{
    int r,d;
    Mnode() {}
    Mnode(int _r,int _d):r(_r),d(_d) {}
} m[N*N];
int n,q,root;

inline int get(int x,int y)
{
    return x*n+y;
}

void rollr(int l,int r,int d)
{
    if (d==0) return;
    int rt=root;
    for (int i=0;i<(l-1+n)%n;i++)
        rt=m[rt].d;
    int pl=m[rt].d;
    for (int i=0;i<d;i++)
        pl=m[pl].r;
    for (int i=0;i<n;i++) {
        m[rt].d=pl;
        rt=m[rt].r;
        pl=m[pl].r;
    }
    for (int i=l-1;i<r;i++)
        rt=m[rt].d;
    int pr=m[rt].d;
    for (int i=0;i<n-d;i++)
        pr=m[pr].r;
    for (int i=0;i<n;i++) {
        m[rt].d=pr;
        rt=m[rt].r;
        pr=m[pr].r;
    }
    if (l<=0&&0<=r)
        for (int i=0;i<d;i++)
            root=m[root].r;
}

void rollc(int l,int r,int d)
{
    if (d==0) return;
    int rt=root;
    for (int i=0;i<(l-1+n)%n;i++)
        rt=m[rt].r;
    int pl=m[rt].r;
    for (int i=0;i<d;i++)
        pl=m[pl].d;
    for (int i=0;i<n;i++) {
        m[rt].r=pl;
        rt=m[rt].d;
        pl=m[pl].d;
    }
    for (int i=l-1;i<r;i++)
        rt=m[rt].r;
    int pr=m[rt].r;
    for (int i=0;i<n-d;i++)
        pr=m[pr].d;
    for (int i=0;i<n;i++) {
        m[rt].r=pr;
        rt=m[rt].d;
        pr=m[pr].d;
    }
    if (l<=0&&0<=r)
        for (int i=0;i<d;i++)
            root=m[root].d;
}

inline void print()
{
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (j<n-1) printf("%d ",root);
            else printf("%d\n",root);
            root=m[root].r;
        }
        root=m[root].d;
    }
}

int main()
{
    scanf("%d%d",&n,&q);
    int tot=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++) {
            m[tot++]=Mnode(get(i,(j+1)%n),get((i+1)%n,j));
        }
    root=0;
    while (q--) {
        int k,l,r,d;
        scanf("%d%d%d%d",&k,&l,&r,&d);
        if (k==1) rollr(l,r,d);
        else rollc(l,r,d);
    }
    print();
    return 0;
}
