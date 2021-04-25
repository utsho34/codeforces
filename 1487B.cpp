#include <bits/stdc++.h>
using namespace std;
int main() {
    int c;
    cin>>c;
    while(c--){
        int n,k;
        cin>>n>>k;
        k--;
        if(n%2==0){
            int ans=(k%n);
            cout<<ans+1<<"\n";
        }
        else{
            int mid=(n/2);
            int ans=((k/mid)+k)%n;
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}
