#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1 = "WUB";
   
   for(int i=0; i<s.length(); i++)
   {
    s = s-s1;
   }
   
   cout << s;

}