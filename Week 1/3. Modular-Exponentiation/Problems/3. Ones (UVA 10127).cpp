/*
* Date: 4/1/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1068
* Short description: use bigMod
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

ll bigMod(ll x,ll n,ll m)
{
    ll res = 1LL;

    while(n>0)
    {
        if(n%2)
            res = (res*x)%m;
        n/=2;
        x=(x*x)%m;
    }

    return res;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll m;

    while(sf("%lld", &m)!= EOF)
    {
        ll i, s=0;
        FOR(i,1000000)
        {
            s=(s%m + bigMod(10LL,i,m)%m)%m;
            if(!s)
            {
                pf("%lld\n", i+1);
                break;
            }
        }
    }

    return 0;
}
