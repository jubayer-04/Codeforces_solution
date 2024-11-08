#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int sum = 0;
    cin >> n;
    int r[n], c[n];
    for(int i=0; i<n; i++)
    {
        cin >> r[i];
        
    }

    for(int i=0; i<n; i++)
    {
        cin >> c[i];
        
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + r[i];
        
    }
   
    sort(c, c+n);
    
    int x;
    for(int i=0; i<n; i++)
    {
        
            if((c[n-1]+c[n-2]) >= sum)
            {
                x=1;
            } else{
                x=0;
            }
        
    }

    if(x==1)
    {
        cout << "YES";
    }
    else if(x==0) 
    {
        cout << "NO";
    }
    
    
}