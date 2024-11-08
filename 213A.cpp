#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, P, V, T, number=0;
        
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> P >> V >> T;

        if(P+V+T >= 2)
        {
            number++;
        }
        
    }

    cout << number;
    
}