#include<bits/stdc++.h>
#define ll long long


using namespace std;

vector<vector<int>>powerSet;    //powerset containing the subsets

void generate(vector<int> &subset , int k, vector<int> &arr)
{
	if(k==arr.size())
	{
		powerSet.push_back(subset);   //base condition
		return;
	}

	generate(subset,k+1,arr);   //kth element not added in the subset

	subset.push_back(arr[k]);

	generate(subset,k+1,arr);   //kth element added in the subset

	subset.pop_back();         //backtracking

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	int n,num;
	cin>>n;
	vector<int>arr(n);
	
	for(int i=0;i<n;i++)
		cin>>arr[i];           

	vector<int>subset;

	//passing empty array, 0th index and array containing elements
	generate(subset , 0 , arr);  

	for(auto x : powerSet){
		for(auto y : x)
		{
			cout<<y<<" ";
		}
		cout<<"\n";
	}

	return 0;
}