#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;

    while(t--)
    {
        cin >> a >> b;

         if(a%b==0)
        {
            cout << "0" << endl;
        } else if((a/b)+(a%b)>b){
            cout << b-(a%b) << endl;
        }else if(a/b<=0)
        {
            cout << b-a << endl;
        }
        else{
            cout << (a/b)+(a%b) << endl;
        }
       
    }
    
}