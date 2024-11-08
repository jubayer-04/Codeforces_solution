#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    string s, f;
    while(t--)
    {
        cin >> n;
        cin >> s >> f;
        int count1=0, count2=0, cnt=0;

        for(int i=0; i<n; i++)
        {
            if(s[i] == '1')
            count1++;
            if(f[i] == '1') 
            count2++;
            if(f[i]!= s[i] && f[i]=='1') cnt ++;
        }

       if(count1 > count2) cnt +=(count1-count2);

       cout << cnt << endl;
        
    }

}