/*
* Date: 2/4/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=627
* Short description: count Goldbach's conjecture
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
#define MX 40000

bool isPrime[MX+1];

void sieve()
{
    int i,j;

    isPrime[0]=isPrime[1]=true;

    RFOR(2,MX,i)
        if(!isPrime[i])
            RRFOR(i*2,MX,j,i)
                isPrime[j]=true;
}


int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    sieve();
    int i,n;

    while(sf("%d", &n), n)
    {
        int c=0;
        for(i=2; i<=n-i; i++)
            if(!isPrime[i] && !isPrime[n-i])
                c++;
        pf("%d\n", c);
    }



    return 0;
}
