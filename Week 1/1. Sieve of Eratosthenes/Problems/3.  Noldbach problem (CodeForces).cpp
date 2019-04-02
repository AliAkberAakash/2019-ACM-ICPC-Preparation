/*
* Date: 3/27/2019
* Author: Ali Akber Aakash
* Problem source: http://codeforces.com/problemset/problem/17/A?locale=en
* Short description:
* Verdict:
* Email: ali852609@gamil.com
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
#define MAX 1005

bool visited[MAX+1];
vi primes;
vi noldbachs;

void sieve()
{
    int i,j;
    CLR(visited,0);

    visited[0]=visited[1]=true;

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

void noldbach()
{
    int i;
    FOR(i,primes.size()-1)
    {
        int valid = primes[i]+primes[i+1]+1;
        if(!visited[valid])
        {
            noldbachs.pb(valid);
            //cout<<valid<<" ";
        }
    }
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int i, n, k, c;

    sf("%d %d", &n, &k);

    sieve();
    noldbach();

    c=0;

    FOR(i,noldbachs.size())
    {
        if(noldbachs[i]>=2 && noldbachs[i]<=n)
        {
            c++;
        }
    }

    if(c>=k)
        pf("YES\n");
    else
        pf("NO\n");

    return 0;
}
