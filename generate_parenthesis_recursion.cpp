#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector<string>powerSet;

void generate(string &s , int open, int close)
{
	if(open==0 && close==0)
	{
		powerSet.push_back(s);
		return;
	}

	if(open>0)
	{
		s.push_back('(');
		generate(s,open-1,close);
		s.pop_back();
	}

	if(close>0 && open<close)
	{
		s.push_back(')');
		generate(s,open,close-1);
		s.pop_back();
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	int num;
	cin>>num;
	string s;
	generate(s,num,num);

	for(auto x : powerSet)
		cout<<x<<"\n";
	
	return 0;
}