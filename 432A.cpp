#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnt=0;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[j] = a[j] + 1;
        }

    }
    for(int i=0; i<n; i++)
    {
        if(a[i] <=5) cnt++;
    }

   cout << floor(cnt/3);


}