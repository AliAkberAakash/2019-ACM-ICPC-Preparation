/*
* Date: 30/3/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=347
* Short description: Find primes in a range
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
#define mod 1000000007
#define MX 1005

bool visited[MX+1]; // to check if prime or not prime
vi primes; // to store all the primes
int primeCount,numOfPrimes[MX+1]; // to store the range of primes between 1 and i


// sieve of Eratosthenes
void sieve()
{
    int i,j;
    primeCount=0; // no primes found yet
    CLR(visited,true);

    primes.pb(1); // setting 1 as prime for this problem
    numOfPrimes[1]=++primeCount; // incrementing the number of primes

    RFOR(2,MX,i)
    {
        if(visited[i])
        {
            primes.pb(i);
            ++primeCount; // incrementing the number of primes found
            RRFOR(i*2,MX,j,i)
                visited[j]=false;
        }
        numOfPrimes[i]=primeCount; // storing the number of primes
                                   // from 1 to i
    }

}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    sieve();

    int i,n,c,strt,end,x;

    while(sf("%d %d", &n, &c)!= EOF)
    {
        pf("%d %d:", n, c);
        int list = numOfPrimes[n]; // number of primes from 1 to n

        strt=0; //starting position to be printed
        end=list; //ending position

        if(list%2==0)
            x=c*2; // if list has even number of primes print c*2 primes
        else
            x=(c*2)-1; // if list has odd number of primes (c*2)-1 primes

        //if x is equal to the number of primes print all
        //else print x primes from the middle
        if(x<list)
        {
            int k=(list-x)/2;
            strt = k; // determine the start
            end = list-k; //determine the end
        }

        //print all the primes
        RFOR(strt, end-1, i)
            pf(" %d", primes[i]); // print space before each prime number
        puts("\n"); //print two blank lines after each case
    }

    return 0;
}
