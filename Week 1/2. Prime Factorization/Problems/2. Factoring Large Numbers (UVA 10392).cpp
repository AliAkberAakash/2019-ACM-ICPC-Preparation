/*
* Date: 4/2/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1333
* Short description: prime factorization
* Verdict:
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
#define CLR(x) memset(x,0,sizeof(x))
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define MOD 1000000007
#define MX 10000000

bool isPrime[MX+1];
vi primes;

void sieve()
{
    ll i,j;

    RFOR(2,MX,i)
    {
        if(!isPrime[i])
            primes.pb(i);
        RRFOR(i*2,MX,j,i)
            isPrime[j]=true;
    }
}

void primeFactors(ll m)
{
    int idx=0;
    ll f=(ll)primes[idx];
    while(m >= f*f)
    {
        while(m%f==0)
        {
            pf("    %lld\n",f);
            m/=f;
        }
        f=(ll)primes[++idx];
    }

    if(m!=1)
        pf("    %lld\n", m);
}


int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    ll m;
    sieve();

    while(true)
    {
        sf("%lld", &m);
        if(m==-1)
            break;

        primeFactors(m);
        puts("");

    }

    return 0;
}
