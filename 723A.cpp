#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3], res=0;
    for(int i=0; i<3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+3);

    

    res = (arr[1]-arr[0]) + (arr[1] - arr[1]) + (arr[2] - arr[1]);

    cout << res;

    return 0;

}