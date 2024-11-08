#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int j = s.length();
    int count=1;

    for(int i=0; i<j; i++)
    {
        if(s[i] == s[i-1])
        {
            count+=1;
            if(count == 7)
            {
                cout << "YES";
                return 0;
            }
        }else{
        count = 1;
        }
        
    } 

    
    cout << "NO";
    
}