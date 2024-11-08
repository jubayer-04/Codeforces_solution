#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;

    while(t--)
    {
        cin >> s;
        if(s=="1") cout << 1<<endl;
        else if(s=="11") cout << 3 << endl;
        else if(s=="111") cout << 6 << endl;
        else if(s=="1111") cout << 10 << endl;

        else if(s=="2") cout << 11 << endl;
        else if(s=="22") cout << 13 << endl;
        else if(s=="222") cout << 16 << endl;
        else if(s=="2222") cout << 20 << endl;

         else if(s=="3") cout << 21 << endl;
        else if(s=="33") cout << 23 << endl;
        else if(s=="333") cout << 26 << endl;
        else if(s=="3333") cout << 30 << endl;

         else if(s=="4") cout << 31 << endl;
        else if(s=="44") cout << 33 << endl;
        else if(s=="444") cout << 36 << endl;
        else if(s=="4444") cout << 40 << endl;

         else if(s=="5") cout << 41 << endl;
        else if(s=="55") cout << 43 << endl;
        else if(s=="555") cout << 46 << endl;
        else if(s=="5555") cout << 50 << endl;

         else if(s=="6") cout << 51 << endl;
        else if(s=="66") cout << 53 << endl;
        else if(s=="666") cout << 56 << endl;
        else if(s=="6666") cout << 60 << endl;

         else if(s=="7") cout << 61 << endl;
        else if(s=="77") cout << 63 << endl;
        else if(s=="777") cout << 66 << endl;
        else if(s=="7777") cout << 70 << endl;

         else if(s=="8") cout << 71 << endl;
        else if(s=="88") cout << 73 << endl;
        else if(s=="888") cout << 76 << endl;
        else if(s=="8888") cout << 80 << endl;

         else if(s=="9") cout << 81 << endl;
        else if(s=="99") cout << 83 << endl;
        else if(s=="999") cout << 86 << endl;
        else if(s=="9999") cout << 90 << endl;
    }
}