#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    int n;
    cin >> n;
    
    int count = 0;
    
    for(int i=0; i<n; i++)
    {
        cin >> c;
        
          if(c == "X--" || c == "--X")
        {
        count--;
        }
        else if(c == "X++" || c == "++X"){
        
        count++;
         }
    }
    
   cout << count;


    return 0;
}