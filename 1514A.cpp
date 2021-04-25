#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000];
    int n,i,tc,p=0,j;
    cin>>tc;
    while(tc--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            p=p*i;
        }
        cout<<p;
    }
    return 0;
}
