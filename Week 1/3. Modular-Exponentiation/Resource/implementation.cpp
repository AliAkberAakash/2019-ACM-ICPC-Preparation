/*
* Date: 29/3/2019
* Author: Ali Akber Aakash
* Problem source: Implementation of modular exponentiation
* Short description:
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

//recursive way
int modExpRec(int x, int n, int m)
{
    if(n==0)
        return 1;
    if(n%2)
        return ((x%m)*modExpRec(x*x, (n-1)/2, m))%m;
    else
        return modExpRec(x*x, n/2, m)%m;
}

int modExpIter(int x, int n, int m)
{
    int res=1;
    while(n>0)
    {
        if(n%2 == 1)
            res=(res*x)%m;
        n/=2;
        x=(x*x)%m;
    }

    return res;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cout<<modExpRec(2,0,7)<<endl;
    cout<<modExpIter(2,0,7)<<endl;

    return 0;
}
