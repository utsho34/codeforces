#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ans=0,temp=8;
		for(int i=1;i<=n/2;i++)
		{
			ans+=(temp*i);
			temp+=8;
		}
		cout<<ans<<endl;
	}
    return 0;
}

