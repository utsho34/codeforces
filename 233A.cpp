#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if( n % 2 == 1 )
    {
        cout << -1 <<endl;
    }
    else
    {
        int i, a[101];
        for( i=1; i<=n; i++ )
        {
            if( i % 2 == 1 )
            {
                a[i] = i + 1;
            }
            else
            {
                a[i] = i - 1;
            }
        }
        for( i=1; i<n; i++ )
        {
            cout << a[i] << " ";
        }
        cout << a[i] << endl;
    }
    return 0;
}
