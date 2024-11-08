#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum1 = 0, sum2 = 0;
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];

            if(i%2 == 0)
            {
                sum2+=arr[i];
            } else 
            {
                sum1+=arr[i];
            }
        }

        cout << sum1-sum2 << endl;
    }
}