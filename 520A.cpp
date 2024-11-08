#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
   

    int l = strlen(s);
     for(int i=0; i<l; i++)
     {
        s[i] = tolower(s[i]);
     }
     
        int count=0;
     
        sort(s, s+l);
    for(int i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }

    if(count>=26)
    {
        cout << "YES";
    } else{
        cout << "NO";
    }
    
}
