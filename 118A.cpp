#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    int l = s.length();
    int i;
    for(i=0; i<l; i++)
    {
        s[i] = tolower(s[i]);
    }
    for(i=0; i<l; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        } else{
            t = t+'.';
            t = t+s[i];
        }
    }
   


    cout << t;
}