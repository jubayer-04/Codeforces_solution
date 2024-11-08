#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b, l, count=0;
    cin >> l >> b;

    while(l<=b)
    {
        l *= 3;
        b *=2;
        count++;
    }
    cout << count;
}