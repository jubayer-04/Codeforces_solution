#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0, count = 0;
    cin >> n;
    int m[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> m[i];
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + m[i];

    }
    float avg = float(sum)/ float(n);
    if(sum >= 18)
    {
        cout << "0";
    } else{
    for(int i=0; i<n; i++)
    {
        while(m[i]<5 && avg<=5){
        if(avg < 4.5 && m[i] > 3)
        {
            m[i] = m[i] + 1;
            count++;
            //if(sum/n >=5)break;
        } else if(avg < 4.5 && m[i] > 2)
        {
            m[i] = m[i] + 2;
            count ++;
        } else if(avg < 4.5 && m[i] > 1)
        {
            m[i] = m[i] + 3;
        }
        }
    }
    }

    cout << count;
}