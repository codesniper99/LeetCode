#include <bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define mod 1000000007
#define us unsigned short
#define IOS ios_base::sync_with_stdio(0);
#define INF LONG_MAX
#define PI 3.1415926535897932384626
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define rep(x,j,n)for(int x=j;x<n;x++)
typedef vector<pair<ll,ll>> vpi;
typedef vector<ll> vi;
typedef vector<vi> vvi;

ll modexp(ll a,ll b,ll m)
{
	ll r=1;
	a=a%m;
	while(b>0)
	{
	if(b&1)
		r=(r*a)%m;
	b=b/2;
	a=(a*a)%m;
	}
	return r%m;
}

#define ll long long int
class Solution {
public:
    bool isPalindrome(string s) {
        ll len=s.size();
        ll left =0;
        ll right = len-1;
        string g;
        g.clear();
        for(ll i=0;i<len;i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z' || (s[i]>='0' && s[i]<='9'))
                g+=s[i];
        }

        ll len2 = g.size();
        for(ll i=0;i<len2;i++)
        {
            if(g[i]!=g[len2-i-1])
                return false;
        }
        return true;
    }
};
int main()
{
    IOS


    return 0;
}
