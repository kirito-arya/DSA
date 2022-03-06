#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	vector<int>v;
	int num;
	while(cin>>num)
	{
		v.push_back(num);     // taking inputs 
	}

	int mx = 0, sum = 0;

	for(int i=0;i<v.size();i++)
	{
		sum = max(v[i],sum+v[i]);    // sum of subarrays
		mx = max(mx,sum);
	}
	cout<<mx<<"\n";

	return 0;
}