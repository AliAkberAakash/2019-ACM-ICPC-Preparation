/*
* Date: 3/4/2019
* Author: Ali Akber Aakash
* Problem source: http://codeforces.com/contest/664/problem/A
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
#define MOD 1000000007

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    string str1,str2;

    cin>>str1>>str2;

    if(!str1.compare(str2))
        cout<<str2<<"\n";
    else
        cout<<1<<"\n";


    return 0;
}
