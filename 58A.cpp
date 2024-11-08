#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    s2 = "hello";
    int k;
    k = 0;
    for(int i=0; i<s1.length(); i++)
    {
        
            if(s1[i] == s2[k])
        {
            k++;
            
        }
        
        
    }
    if(k == s2.length())
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
}