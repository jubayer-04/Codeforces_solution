#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    string s ,t;

    int cnt = 0;
    for(int i=0; i<r*c; i++)
    {
        cin >> s;
        if(s=="B" || s=="W" || s=="G")
        cnt++;
    }
    
   

    if(cnt == r*c)
    {
        cout << "#Black&White" << endl;
        
    } else 
    cout << "#Color" << endl;
       
}