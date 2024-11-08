#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    int d[n], bonus[n];
   int c = 1;
    for(int i=0; i<n; i++)
    {
        cin >> d[i].first ;
        cin >> bonus[i];
    }
     sort(d, d+n);
    

     for(int i=0; i<n; i++)
    {
        if(s>d[i])
        {
            s = s+bonus[i];
        } else 
        {
            c=0;
            break;
        }
    }

    if(c==0)
    {
        cout << "NO\n";
    } else{
        cout << "YES\n";
    }
    
}