/*
* Date: 27/3/2019
* Author: Ali Akber Aakash
* Problem source: https://www.spoj.com/problems/AMR11E/
* Short description: Find number that have at least 3 distinct prime number.
* (Find nth such number)
* Verdict: Accepted
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
typedef priority_queue< int, vector<int>, greater<int> > rpqi;
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
#define max 10005

int visited[max+1];
vi lucky;

void sieve()
{
    ll i,j;

    CLR(visited,0);
    visited[0]=visited[1]=-1;

    RFOR(2,max,i)
    {
        if(!visited[i])
            RRFOR(i*2,max,j,i)
                visited[j]++;
    }

    RFOR(2,max,i)
    if(visited[i]>=3)
        lucky.pb(i);

}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int i,t;
    ll n;

    sf("%d", &t);
    sieve();

//    FOR(i,10)
//        cout<<lucky[i]<<endl;


    FOR(i,t)
    {
        sf("%lld", &n);
        pf("%d\n", lucky[(int)n-1]);
    }

    return 0;
}
