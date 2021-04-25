#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s>>r;
    reverse(s.begin(),s.end());
    if(s==r)
        printf("YES");
    else
        printf("NO");
    return 0;

}
