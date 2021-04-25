#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int a,b,c,i,temp;

    cin>>a>>b>>c;
    int ar[5]={a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c};


    int m=0;
    m =ar[0];

    for ( i=1; i<5; i++)
    {
        if(m<ar[i])
        {
            temp=m;
            m=ar[i];
            ar[i]=temp;

        }
    }
    cout<<m<<"\n";
    return 0;

}
