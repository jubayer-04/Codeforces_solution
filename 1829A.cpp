#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s, cf = "codeforces";
        cin >> s;
        int res=0;
        for(int i=0; i<10; i++)
        {
            if(cf[i] != s[i])
            {
                res++;
            }
        }

        cout << res << endl;
    }
}