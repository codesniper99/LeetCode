    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    ll euclid(pair<ll,ll>a,pair<ll,ll>b)
    {

    	return sqrt(pow(a.first-b.first,2)+pow(a.second-b.second,2));

    }



    int main()
    {

    	ll n;
    cin>>n;
    vector<pair<ll,ll> >a(n);
    a.clear();
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;

        a[i].first=x;
        a[i].second=y;


    }

    	pair<ll,ll>ca;
    	pair<ll,ll>cb;

    	ca.first=a[0].first;
    	ca.second=a[0].second;

    	cb.first=a[1].first;
    	cb.second=a[1].second;

    vector<ll>cluster1;
    vector<ll>cluster2;

    	for(ll i=2;i<n;i++)
    {
    	pair<ll,ll>p=a[i];
    	if(euclid(p,ca)<euclid(p,cb))
    	{
    		ca.first = (ca.first+p.first)/2;

    		ca.second = (ca.second+p.second)/2;
            cluster1.push_back(i+1);
    	}
    	else

    	{
            cb.first = (cb.first+p.first)/2;

    		cb.second = (cb.second+p.second)/2;
            cluster2.push_back(i+1);

    	}


    }
    cluster1.push_back(1);
    cluster2.push_back(2);

cout<<"Coordinates : Centroids \nCa\n";
    cout<<ca.first<<' '<<ca.second<<'\n';
    cout<<"Cb\n";
    cout<<cb.first<<' '<<cb.second<<'\n';

    ll len1 = cluster1.size();
    ll len2 = cluster2.size();
    cout<<"GROUPS ::::: \n";
    for(ll i=0;i<len1;i++)
    {
    	cout<<cluster1[i]<<' ';
    }
    cout<<'\n';
    for(ll i=0;i<len2;i++)
    {
    	cout<<cluster2[i]<<' ';
    }
    cout<<'\n';

    return 0;
    }
