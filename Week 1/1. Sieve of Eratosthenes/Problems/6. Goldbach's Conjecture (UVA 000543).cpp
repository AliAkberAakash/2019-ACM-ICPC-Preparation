/*
* Date: 1/4/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/external/5/543.pdf
* Short description: Goldbach's coonjecture
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
#define CLR(x) memset(x,0,sizeof(x))
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define MOD 1000000007
#define MX 1000000

bool isPrime[MX+1];
vi primes;

void sieve()
{
    ll i,j;

    isPrime[0]=isPrime[1]=true;

    RFOR(2,MX,i)
    {
        if(!isPrime[i])
        {
            primes.pb(i);
            RRFOR(i*i,MX,j,i)
                isPrime[j]=true;
        }
    }
}

int main()
{
//    freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
    int i,n;
    sieve();
    while(sf("%d", &n),n)
    {
        bool x = false;
        for(i=1; i<primes.size() && primes[i]<n; i++)
        {
            //watch(primes[i]);
            if(!isPrime[n-primes[i]]&& n-primes[i]>2)
                {
                    pf("%d = %d + %d\n", n, primes[i], n-primes[i]);
                    x=true;
                    break;
                }
        }
        if(!x)
            pf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}
