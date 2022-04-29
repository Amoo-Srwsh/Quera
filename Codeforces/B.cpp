// in the name of Allah
// https://codeforces.com/problemset/problem/448/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef pair<ll, ll> pll;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define debugp(x) cerr<<#x<<"= {"<<(x.first)<<", "<<(x.second)<<"}"<<endl;
#define debug2(x, y) cerr<<"{"<<#x<<", "<<#y<<"} = {"<<(x)<<", "<<(y)<<"}"<<endl;
#define debugv(v) {cerr<<#v<<" : ";for (auto x:v) cerr<<x<<' ';cerr<<endl;}
#define all(x) x.begin(), x.end()
#define pb push_back
#define SZ(x) ((int)x.size())
#define kill(x) return cout<<x<<'\n', 0;
#define getbit(x, y) (((x)>>(y))&1)
const int inf=1000000010;
const ll INF=1000000000000001000LL;
const int mod=1000000007; 
const int MAXN=1000;
double sum1, sum2;
int a1, a2, a3, b1, b2, b3, n;
int main()
{
	// ... UP solve :)
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	sum1=a1+a2+a3, sum2=b1+b2+b3;
	n-=ceil(sum1/5);
	n-=ceil(sum2/10);
	cout << ((n>=0)?"YES":"NO");
}
