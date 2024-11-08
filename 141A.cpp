#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s;

    cin >> s1 >> s2 >> s;
    string x = s1 + s2;
    sort(s.begin(), s.end());
     sort(x.begin(), x.end());
    
    if(x==s)
    {
        cout << "YES";
    } else 
    cout << "NO";
    

    return 0;

    
}