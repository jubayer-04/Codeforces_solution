#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, cnt = 0;;
    cin >> n;
    int a[12];
    for(int i=0; i<12; i++)
    {
        cin >> a[i];
    }

    sort(a, a+12, greater<int>());
    
    for(int i=0; i<12; i++)
    {
        if(sum < n)
        {
            sum +=a[i];
            cnt++;
        }
        
        if(sum >= n)
        {
             break;
           
        }    
    }

    if(sum >= n)
    {
        cout << cnt;
    } else{
        cout << "-1";
    }
    
}