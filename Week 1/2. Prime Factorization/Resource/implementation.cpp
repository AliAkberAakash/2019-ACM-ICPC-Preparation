/*
* Date: 3/28/2019
* Author: Ali Akber Aakash
* Problem source: Prime Factorization
* Short description: Implementation of prime Factorization
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
#define CLR(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define MAX 100005

bool visited[MAX+1];
vi primes;

void sieve()
{
    CLR(visited,0);
    long  i,j;
    visited[0]=visited[1]=false;
    RFOR(2,MAX,i)
    {
        if(!visited[i])
        {
            primes.pb(i);
            RRFOR(i*2,MAX,j,i)
                visited[j]=true;
        }
    }
}

vi primeFactorization(int N)
{
    vi vc;

    int idx=0, f=primes[idx];

    while(N != 1 && N >= f*f)
    {
        while(N%f==0)
        {
            N/=f;
            vc.pb(f);
        }
        f=primes[++idx];
    }

    if(N!=1)
        vc.pb(N);

    return vc;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    sieve();

    int i,k;

    cin>>k;

    vi print = primeFactorization(k);

    FOR(i,print.size())
        cout<<print[i]<<" ";

    return 0;
}
