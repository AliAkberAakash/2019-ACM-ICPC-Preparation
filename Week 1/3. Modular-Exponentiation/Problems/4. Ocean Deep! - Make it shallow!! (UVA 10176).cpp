/*
* Date: 2/4/2019
* Author: Ali Akber Aakash
* Problem source: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=9
* Short description: Big Mod
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
#define MOD 131071

ll bigMod(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y%2)
            res = (res*x)%MOD;
        x=(x*x)%MOD;
        y/=2;
    }
    return res;
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    string str;

    while(cin>>str)
    {
        while(str[str.length()-1]!='#')
        {
            string str2=str;
            cin>>str;
            str=str2+str;
        }

        int i=0,x=str.length()-2;
        ll k=0;

        while(x>=0)
        {
            ll n=(ll) (str[x]-'0');
            k=(k%MOD+((bigMod(2,i)*(n%MOD))%MOD))%MOD;
            i++;
            x--;
        }
        if(!k)
            pf("YES\n");
        else
            pf("NO\n");
    }

    return 0;
}
