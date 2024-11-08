#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string f, s;
    while(cin >> f >> s)
    {
        for(i=0; i<f.size(); i++)
        {
            if(f[i] >= 'A' && f[i] <= 'Z')
            {
                f[i] = f[i] - 'A'+97;
            }
        }
        for(i=0; i<s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] - 'A'+97;
            }
        }
        for(i=0; i<f.size(); i++)
        {
            if(f[i] > s[i])
            {
                cout << "1";
                return 0;
            } else if(s[i] > f[i])
            {
                cout << "-1";
                return 0;
            } 
        }
        
            
                cout << "0";
            
    }




    return 0;
}