#include<bits/stdc++.h>

using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	int a , b, max_xor = 0;
	cin>> a >> b;
	for(int i = a;i <= b;i++)
	{
		for(int j=i; j<=b;j++)
		{
			int curr_xor = (i^j);
			if(curr_xor>max_xor)
				max_xor=curr_xor;
		}
	}
	cout<<max_xor<<"\n";

}