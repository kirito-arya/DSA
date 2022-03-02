#include<bits/stdc++.h>

using namespace std;

int countSetbits(int num)
{
	int count=0;
	while(num>0)
	{
		count+= num &1;
		num= num>>1;
	}
	return count;
}

int main()
{
	int a,b,count=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if((i&1)== 0 && i<b)
		{
			count+= 2*countSetbits(i) + 1;
			i++;
			continue;
		}
		count+=countSetbits(i);
	}
	cout<<count;
}