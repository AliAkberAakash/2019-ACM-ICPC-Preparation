/*
* Date: 3/31/2019
* Author: Ali Akber Aakash
* Problem source: http://codeforces.com/contest/1144/problem/B
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
#define CLR(x) memset(x,0,sizeof(x))
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    vll even,odd;
    ll x,sum;
    int t,i,j,ev,od;

    sf("%d", &t);

    ev=od=0;
    FOR(i,t)
    {
        sf("%lld", &x);
        if(x%2)
        {
            odd.pb(x);
            od++;
        }
        else
        {
            even.pb(x);
            ev++;
        }
    }

    if(ev)
        sort(even.rbegin(),even.rend());
    if(od)
        sort(odd.rbegin(),odd.rend());

    sum=0;

    if(ev-od>0)
    {
        RFOR(ev-od+1,ev-1,i)
            sum+=even[i];
    }
    else if(ev-od<0)
    {
        RFOR(od-ev+1,od-1,i)
            sum+=odd[i];
    }

//    //two pointers
//    i=j=0;
//    while(i<ev && j<od)
//    {
//        i++;
//        j++;
//    }
//
//    ll sum=0;
//    RFOR(i+1,ev-1,i)
//        sum+=even[i];
//    RFOR(j+1,od-1,j)
//        sum+=odd[i];

    pf("%lld\n", sum);

    return 0;
}
