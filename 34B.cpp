#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(int i=0; i<m; i++)
    {
        if(a[i] < 0)
        {
            sum = sum + abs(a[i]);
        }
        
    }

    cout << sum << endl;
}