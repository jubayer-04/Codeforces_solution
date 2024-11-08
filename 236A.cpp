#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    int count = 0;
    int l = strlen(s);
    sort(s, s+l);
    for(int i=0; i<l; i++)
    {
       
            if(s[i]!=s[i+1])
            {
            count ++;
            }   
        
    }

    if(count%2 != 0)
    {
        cout << "IGNORE HIM!";
         
    } else 
    {
        cout << "CHAT WITH HER!";
       
    }
}