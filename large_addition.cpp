/****Author: OrionJaman**/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
typedef long long                             int ll;
typedef long double                           ld;
typedef unsigned long long int                ull;
#define L(i, j, k)                            for (ll i = (j); i < (k); i++)
// #define fors(i,s,n)                        for(ll i=s;i<n;i++)
// #define rfor(i,n)                          for(ll i=n;i>0;i--)
#define R(i, j, k)                            for (ll i = (j); i > =(k); i--)
#define yes                                   cout << "YES"<< nl;
#define no                                    cout << "NO" << nl;
#define nl                                    "\n"
#define rtn                                   return 0
#define bk                                    break
#define ct                                    continue
#define mp                                    make_pair
#define ve(a)                                 vector<a>
#define se(a)                                 set<a>
#define pa(a, b)                              pair<a, b>
#define ma(a, b)                              map<a, b>
#define qu(a)                                 queue<a>
#define st(a)                                 stack<a>
#define all(a)                                v.begin(); v.end()
#define pp                                    pop_back()
#define pb                                    push_back
#define in(v)                                 for (auto &vl : v){ cin >> vl;}
#define pvt(al)                               for (auto &a : al) cout << a << " "; cout << nl;
#define pmt(al)                               for (auto &a : al) cout << a.first << " "<< a.second <<nl; cout << nl;
#define fastcio();                            ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void ankaraMessi()
{
ll n;
cin>>n;
if(n%10==9){ no return;}
n=n/10;
while(n>9){
    if(n%10==0){ no return;}
    n/=10;
}
if(n!=1){ no }
else  yes
}
int main()
{
fastcio();
ll t;
cin >> t;
 while (t--)
ankaraMessi();
 return 0;
}