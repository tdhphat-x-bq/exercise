#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
const long long md2=5e8+4;
long long get(long long n)
{
    long long ans=0;
    for(long long i=1;i*i<=n;i++)
    {
        long long r1=n/i,r2=n/(i+1);
        ans=(ans+r1%mod*i%mod)%mod,r2=max(i,r2);
        if(i*i<n) ans=(ans+(r1%mod*(r1%mod+1)%mod*md2%mod-r2%mod*(r2%mod+1)%mod*md2%mod+mod)*i)%mod;
    }
    return ans;
}
int main()
{
    long long l,r;
    cin>>l>>r;
    cout<<(get(r)-get(l-1)+mod)%mod;
}

