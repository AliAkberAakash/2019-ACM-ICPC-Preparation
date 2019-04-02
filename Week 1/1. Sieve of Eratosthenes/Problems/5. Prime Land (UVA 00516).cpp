/*
* Date: 30/3/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/external/5/516.pdf
* Short description: Find prime factors of positive and negative numbers
* Verdict: AC
* Email: ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

//typedef
typedef long double ld;
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pld;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef priority_queue< int, vector<int> , greater<int> > rpqi;
typedef stack<int> si;
typedef vector <pii> vpii;

#define FOR(i,n) for(i=0; i<n; i++)
#define RFOR(a,b,i) for(i=a; i<=b; i++)
#define RRFOR(a,b,i,j) for(i=a; i<=b; i+=j)
#define pf printf
#define sf scanf
#define um unordered_map
#define CLR(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define MX 1000000

bool visited[MX+1];
vll primes;

void sieve()
{
    ll i,j;
    CLR(visited,true);

    visited[0]=visited[1]=0;
    RFOR(2,MX,i)
    {
        if(visited[i])
        {
            primes.pb(i);
            RRFOR(i*2,MX,j,i)
                visited[j]=false;
        }
    }
}

vll primeFactors(ll n)
{
    vll vc;

    ll idx=0, f=primes[idx];

    while(n != 1 && n >= f*f)
    {
        while(n%f==0)
        {
            vc.pb(f);
            n/=f;
        }
        f=primes[++idx];
    }

    if(n!=1)
        vc.pb(n);

    return vc;
}

ll mod(ll x)
{
    if(x<0)
        return -x;
    return x;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    sieve();

    ll x,i;

    while(sf("%lld", &x),x) // if x is 0 end
    {
        pf("%lld = ", x);

        if(x<0)
            pf("-1 x ");

        if(mod(x)>1)
        {
            vll vc = primeFactors(mod(x));
                FOR(i,vc.size())
                {
                    pf("%lld", vc[i]);
                    if(i<vc.size()-1)
                        pf(" x ");
                }

        }
        pf("\n");
    }




    return 0;
}
