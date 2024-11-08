#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum=0, count =0, sum2 = 0;
    cin >> n;
    int c[n];
    for(i=0; i<n; i++)
    {
        cin >> c[i];
    }

    sort(c, c+n);
    for(i=0; i<n; i++)
    {
       sum+=c[i];

    }
    sum = sum/2;
    for(i=n-1; i>=0; i--)
    {
        sum2+=c[i];
        count ++;
        if(sum2>sum)
        {
            break;
        }
    }


    cout << count;
}