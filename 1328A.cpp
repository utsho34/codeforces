#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,a,b;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<0<<endl;
        else{

        int s=(a/b)+1;
        cout<<(s*b)-a<<endl;
        }

    }
    return 0;
}
