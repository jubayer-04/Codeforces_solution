#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long double pi, sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> pi;
        sum += pi;
    }

    cout <<sum/(double)n;
}