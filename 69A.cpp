#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum1=0, sum2 = 0, sum3=0;
    cin >> n;
    int arr[3];
    while(n--){

    for(int i=0; i<3; i++)
    {
        cin >> arr[i];
    } 

    for(int i=0; i<3; i++)
    {
        sum1=(sum1+arr[0]);
        sum2 = (sum2+arr[1]);
        sum3 = (sum3+arr[2]);
    }
      
    }   

   if(sum1/3 == 0 && sum2/3==0 && sum3/3 == 0)
   {
    cout << "YES";
   } else
   {
    cout << "NO";
   }   
}
