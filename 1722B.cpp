#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, c;
    cin >> t;

    string j, s;
    while(t--)
    {
        cin >>c;
        cin >> j;
        cin >> s;

        for(int i=0; i<j.length(); i++)
        {
            if(j[i] == 'G')
            {
                j[i] = 'B';
            }
        }

        for(int i=0; i<j.length(); i++)
        {
            if(s[i] == 'G')
            {
                s[i] = 'B';
            }
        }

        if(j==s)
        {
            cout << "YES" << endl;
        } else 
        {
            cout << "NO" << endl;
        }

        
    }
}