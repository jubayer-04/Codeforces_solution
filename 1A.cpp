#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    double x = ceil(m/a);
    double y = ceil(n/a);

    long long int value = x*y;

    cout << value;
    return 0;
}