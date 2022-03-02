#include<bits/stdc++.h>

using namespace std;

unsigned xor_loop(vector<int>arr)
{
	unsigned res=0;
	for(int i=0;i<arr.size();i++)
		res = res^arr[i];

	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);
	
	int n,num,res,a=0,b;
	vector<int>arr;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		arr.push_back(num);
	}
	res = xor_loop(arr);
	int index=0;
	int temp = res;
	while(temp>0)
	{
		if((temp&1)==1)
			break;
		index++;
		temp = temp>>1;
	}
	int mask = 1<<index;
	
	for(int i=0;i<n;i++)
	{
		if((arr[i]&mask))
			a= a^arr[i];
	}
	b=res^a;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

	return 0;
}