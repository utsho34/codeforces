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
        if(n%2==1 || n<4)cout<<-1<<endl;
        else
        {
            long long int mn,mx;
            int ans=0;
            mn=n/6;
            long long int ob=n%6;
            if(ob!=0)mn++;
            mx=n/4;
            cout<<mn<<" "<<mx<<endl;
        }
    }
}
