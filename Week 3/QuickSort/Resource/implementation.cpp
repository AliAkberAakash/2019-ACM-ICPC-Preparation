/*
* Date: 4/4/2019
* Author: Ali Akber Aakash
* Short description: Implementation of QuickSort
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


int a[100];

int pivot(int start, int end)
{
    int i,p=a[end],part=start;
    RFOR(start,end-1,i)
        if(a[i]<=p)
        {
            swap(a[i], a[part]);
            part++;
        }
    swap(a[end], a[part]);
    return part;
}

void quickSort(int start, int end)
{
    if(start>=end)
        return;
    int part=pivot(start,end);
    quickSort(start,part-1);
    quickSort(part+1,end);
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int i;
    FOR(i,10)
    {
        a[i]=(10-i);
        pf("%d ", a[i]);
    }
    pf("\n");
    quickSort(0,9);
    FOR(i,10)
        pf("%d ", a[i]);
    pf("\n");

    return 0;
}
