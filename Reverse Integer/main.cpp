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

class Solution {
public:
    int reverse(int x) {

        ll len =0;
        ll ans=0;
        ll temp =x;
        while(temp)
        {
            temp=temp/10;
            len++;
        }
        temp = x;
        ll i=0;
        while(temp)
        {
            ans+= pow(10,len-i-1) *(temp%10);
            temp=temp/10;
            i++;
        }
       // if(x<0)
        //    ans=-ans;
        if(ans> pow(2,31) ||ans<-pow(2,31))
            ans=0;
        return ans;

    }
};

int main()
{
    IOS


    return 0;
}
