#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x;
    
    int j = stoi(s);
    string s1 = to_string(j+1);
  
    for(int i= j+1; i <= 9000; i++)
    {
        for(int k=0; k<s.size(); k++)
        {

            if(s1[k] == s1[k-1]) j++;
           
        }
        
    }
    cout << j;
   
}