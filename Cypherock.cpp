#include<bits/stdc++.h>
using namespace std;
long long D[4];
long long func2()
{
    long long y0=D[0];
    long long y1=D[1];
    cout<<2*y0 - y1<<endl;
}
void func1(long long byte[32])
{
    srand(time(NULL));
    long long s=32;
    long long num=0;
    for(long long i=0;i<32;i++)
    {
        num+=byte[i]*(pow(10,(s-i-1)));
    }
    long long n=4;
    long a = rand()%(256 + 1); 
    long b = rand()%(256 + 1);
    long c,d;
    if(a>b)
    {
        c=a;
        b=d;
    }
    else
    {
        c=b;
        d=a;
    }
    if(c==0)
        c++;
    if(d==0)
        d++;
    for(long long x=1;x<=n;x++)
    {
        long long t=(d*(pow(x,2)));
        D[x-1]=num + (c*x) + t;
    }
}
int main()
{
    
    long long byte[32];
    for(long long i=0;i<32;i++)
    {
        long long a;
        cin>>a;
        byte[i]=a;
    }
    func1(byte);
    func2(); 
}
