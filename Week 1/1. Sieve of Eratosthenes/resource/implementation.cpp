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


//finds the prime numbers
void sieve(long n, vi &primes)
{
    //creates a visited array to eliminate non primes
    //and keep track of primes
    long i,j;
    bool visited[n+1];
    CLR(visited,0);

    //since neither 0 nor 1 is prime
    // true means not prime false means prime
    visited[0]=visited[1]=true;

    //
    RFOR(2,n,i)
    {
        //checking if already marked
        if(!visited[i])
        {
            //save the prime
            primes.pb(i);
            //make all the multiplicants of the prime as non prime
            RRFOR(i*i,n,j,i)
                visited[j]=true;
        }
    }

}

//prints the prime numbers
void printPrimes(vi primes)
{
    int i;
    FOR(i,primes.size())
        pf("%d ", primes[i]);
    pf("\n");
}


int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    vi primes;
    long n;

    cin>>n;

    //function call to build the vector and print it
    sieve(n,primes);
    printPrimes(primes);

    return 0;
}
