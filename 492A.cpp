#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;

    int res=1;
    int cnt = 0;
    int i=1;
    while(res<=s)
    {
        res = ((i*i) +i)/2;
        if(res>s) break;
        s = s - res;
        cnt ++;


        i++;

    }

    cout << cnt << endl;
}