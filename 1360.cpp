#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int c,a,b;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        if(a>b){
            if(b*2>a)
                cout<<pow(b*2,2)<<"\n";
            else
                cout<<pow(a,2)<<"\n";
        }
        else if(a==b){
            cout<<pow((a+b),2)<<"\n";
        }
        else if(a<b){
            int d= 2*a;
            if(d>b)
                cout<<d*d<<"\n";
            else
                cout<<b*b<<"\n";
        }


    }
    return 0;
}
