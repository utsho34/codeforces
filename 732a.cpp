#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i;
    cin>>k>>r;
    int  sum=0;
    for(int i=0;;i++){
            k=k%10;
            sum=sum+k;
            if(sum%10==0||sum%10==r)
            {
                cout<<i+1<<endl;
                break;
            }

    }
    return 0;


}

