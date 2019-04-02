/*
* Date: 28/3/2019
* Author: Ali Akber Aakash
* Problem source: https://www.spoj.com/problems/FACTCG2/
* Short description: The task in this problem is to write a number in a multiplication of
* prime numbers separated by " x ". You need to put the number 1 in this multiplication.
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

#define mSize 3165 // why this number? ;)


bool visited[mSize+1];
vi primes;

int mx;

//pre calculating all the primes up to 10^7
void sieve()
{
    mx=0;
    CLR(visited,true);
    ll i,j;

    visited[0]=visited[1]=false;

    RFOR(2,mSize,i)
    {
        if(visited[i])
        {
            primes.pb(i);
            RRFOR(i*i,mSize,j,i)
                visited[j]=false;
        }
    }
}

vi factors(int n)
{
    vi vc;
    int idx=0, f=primes[idx];
    while(n!=1 && n >= f*f)
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

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int i,n;
    sieve();

    while(sf("%d", &n)!=EOF)
    //for(n=1; n<=10000000; n++)
    {
        //cout<<n<<" -> ";
        pf("1");
        if(n>1)
        {
            vi vc=factors(n);
            FOR(i,vc.size())
            {
                pf(" x %d", vc[i]);
            }
        }
        pf("\n");
    }

    //cout<<mx<<endl;

    return 0;
}
