#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    bool flag=0;

    for(int i=0; i<n; i++)
    {
        if(a[i] != c[i] && b[i] != c[i])
        {
            flag = 1;
            break;
        }

    }
    if(flag)
        {
            cout << "YES\n";
        } else
        cout << "NO\n";
}
int main()
{
    int T;
    cin >> T;
    while (T!=0)
    {
        solve();
        T--;
    } 

    return 0;
}