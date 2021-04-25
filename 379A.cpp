#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, mod;
    scanf("%d%d", &a, &b);
    int sum = a;
    while(a>=b)
    {
        c = (a/b);
        sum = sum + c;
        mod = (a%b);
        a= (c+mod);
    }
    printf("%d\n", sum);
}
