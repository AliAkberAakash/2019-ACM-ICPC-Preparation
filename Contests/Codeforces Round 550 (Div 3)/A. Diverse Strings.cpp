/*
* Date: 31/3/2019
* Author: Ali Akber Aakash
* Problem source: http://codeforces.com/contest/1144/problem/A
* Short description: String manipulation
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
typedef priority_queue< int, vector<int>, greater<int> > rpqi;
typedef stack<int> si;
typedef vector <pii> vpii;

#define FOR(i,n) for(i=0; i<n; i++)
#define RFOR(a,b,i) for(i=a; i<=b; i++)
#define RRFOR(a,b,i,j) for(i=a; i<=b; i+=j)
#define pf printf
#define sf scanf
#define um unordered_map
#define CLR(x) memset(x,0,sizeof(x))
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define watch(x) cout << (#x) << " is " << (x) << endl

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    string s;
    int i,t;
    int frequency[26];

    sf("%d", &t);
    while(t--)
    {
        CLR(frequency);
        bool flag =false;
        cin>>s;
        if(s.length()>1)
        {
            FOR(i,s.length())
            frequency[s[i]-'a']++;

            FOR(i,26)
            {
                if(frequency[i])
                {
                    if(!flag)
                    {
                        flag = true;
                        while(frequency[i] && i<26)
                        {
                            if(frequency[i]>1)
                            {
                                flag = false;
                                break;
                            }
                            i++;
                        }
                        if(!flag)
                            break;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }

//            FOR(i,26)
//            watch(frequency[i]);



        }
        else
            flag = true;

        if(!flag)
            pf("No\n");
        else
            pf("Yes\n");
    }

    return 0;
}
