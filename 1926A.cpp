#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int cnt1 = 0, cnt2 = 0;
    while(t--)
    {
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'A') cnt1++;
            else  if (s[i] == 'B') cnt2++;
        }
        if(cnt1>cnt2) cout << "A" << endl;
        else cout << "B" << endl;

        cnt1 = 0;
        cnt2 = 0;
    }

    
}