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
    bool isAnagram(string s, string t) {

        char a1[26];

        char a2[26];
        memset(a1,0,sizeof(a1));
        memset(a2,0,sizeof(a2));

        ll len = s.size();
        ll len2= t.size();
        if(len!=len2)
            return false;
        for(ll i=0;i<len;i++)
        {
            a1[s[i]-'a']++;
            a2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a1[i]!=a2[i])
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
