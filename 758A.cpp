#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], sum=0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        if(arr[i] < arr[n-1])
        {
       sum = sum + arr[n-1]-arr[i];
        } 
    }

    
        cout << sum;
    
}