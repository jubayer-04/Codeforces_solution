#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    float sum=0;
    cin >> n;
    int m[n];
    for(int i=0; i<n; i++)
    {
        cin >> m[i];
    }
    sort(m, m+n);
    for(int i=0; i<n; i++)
    {
        sum = sum + m[i];

    }

    float avg = sum /n;

    
     while(avg < 4.5)
     {
        count ++;
        for(int i=0; i<n; i++)
        {
        
            if(m[i] <=4)
            {
           

                sum +=(5-m[i]);
                m[i]=5;
                break;
            }
        
        }
        avg = sum/n;
     }
    

    cout << count;
}