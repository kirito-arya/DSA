#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	int arr[] = {2,3,5,7,15,4,9,25,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	int x = 25;

	sort(arr,arr+n);

	int a = 0, b = n-1;
	
	while(a<=b)
	{
		int mid = (a+b)/2;

		if(arr[mid]==x)
		{
			cout<<x<<" found at "<<mid;
			break;
		}
		else if(arr[mid]>x)
		{
			b = mid-1;
		}
		else
			a = mid+1;

	}

	return 0;
}