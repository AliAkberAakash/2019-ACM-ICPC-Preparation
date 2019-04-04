/*
* Date: 3/4/2019
* Author: Ali Akber Aakash
* Problem source: Implementation of Euclidian GCD algorithm
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

//recursive implementation
int gcdRecur(int a, int b)
{
    return !b ? a : gcdRecur(b,a%b);
}

//iterative implementation
int gcdIter(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

//Substitution implementation
int gcdSub(int a, int b){

    while(a != b){
        if(a > b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    return a;

}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cout<<gcdRecur(64893,88968)<<endl;
    cout<<gcdRecur(64893,88968)<<endl;
    cout<<gcdIter(64893,88968)<<endl;
    cout<<gcdIter(64893,88968)<<endl;
    cout<<gcdSub(64893,88968)<<endl;
    cout<<gcdSub(64893,88968)<<endl;

    return 0;
}
