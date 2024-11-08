#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int i;
        cin >> i;
        string s, t = "Timur";
        sort(t.begin(), t.end());
        cin >> s;
        sort(s.begin(), s.end());

        if(s==t)
        {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}