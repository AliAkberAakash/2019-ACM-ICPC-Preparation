/*
* Date: 27/3/2019
* Author: Ali Akber Aakash
* Problem source: https://wiki.haskell.org/99_questions/Solutions/39
* Problem description: Given a range of integers by its lower and upper limit,
* construct a list of all prime numbers in that range.
* Email: ali852609@gail.com
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
#define MAX_VAL 1000005

long n;
bool visited[MAX_VAL];

void sieve(long n, vi &primes)
{
    long i,j;
    CLR(visited,0);

    visited[0]=visited[1]=true;

    RFOR(2,n,i)
    {
        if(!visited[i])
        {
            primes.pb(i);
            RRFOR(i*i,n,j,i)
            {
                visited[j]=true;
            }
        }
    }

}

void printPrimes(vi primes, int beg, int end)
{
    int i;
    RFOR(beg,end,i)
        if(!visited[i])
            pf("%d ", i);
    pf("\n");
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    vi primes;
    long n;
    int beg,end;

    cin>>n;
    cin>>beg>>end;

    sieve(n,primes);
    printPrimes(primes,beg,end);


    return 0;
}
