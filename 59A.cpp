#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
   
        cin >> s;
    
    int l = strlen(s);
    int cnt1=0, cnt2=0;
    int upper(0), lower(0);

    for(int i=0; i<l; i++)
    {
        if(isupper(s[i]))
        {
            upper = upper+1;
        } else 
        {
            lower = lower+1;
        }
    }

    if(upper>lower)
    {
        for(int i=0; i<l; i++){
             s[i] = toupper(s[i]);
        }
    }else{

        for(int i=0; i<l; i++){
             s[i] = tolower(s[i]);
        }
    }

    cout << s;
}