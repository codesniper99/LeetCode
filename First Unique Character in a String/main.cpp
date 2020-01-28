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
    int firstUniqChar(string s) {

        map<char,ll>m;
        ll len = s.size();
        for(ll i=0;i<len;i++)
        {
            if(m[s[i]]>0)
                m[s[i]]=2;
            else
                m[s[i]]=1;
        }
        for(ll i=0;i<len;i++)
        {
            if(m[s[i]]==1)
                return i;
        }
        return -1;

    }
};
int main()
{
    IOS



    return 0;
}
