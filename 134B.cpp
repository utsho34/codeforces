#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1;
    int b=1;
    int num,count=0;
    cin>>num;
    while(a||b==num)
    {
        a=a+b;b=b;
        a=a;b=b+a;
        count++;
    }
    cout<<count;
    return 0;
}
