#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if(n<2)//num cannot less than 2
        return false;
    else if(n==2)//num can be 2
        return true;
    long long r=sqrt(n);//range for iteration ,time complexity
    if(n%2==0)//divisible by 2 are not prime
        return false;
        for(int j=3; j<=r; j+=2){//increment with 2 and set false for non prime numbers
            if(n%j==0)
                return false;
            }
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        long long sq=sqrt(num);
        if(sq*sq==num&&isPrime(sq)==true)//check the final condition
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
    //sieve of eratosthenses algorithm........
}
