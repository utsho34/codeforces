#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,count_a,count_b;
    count_a=count_b=0;
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c;
        if(c=='A')
            count_a++;
        else
            count_b++;

    }
    if(count_a>count_b)
        printf("Anton");
    else if(count_a<count_b)
        printf("Danik");
    else
        printf("Friendship");
    return 0;


}
