#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string str[2001];
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string useless;
        cin >> str[i];
        getline(cin, useless);
    }
    
    sort(str, str+t);
    string temp = str[0];
    int count = 1;
    for(int i=1; i<t; i++)
    {
        if(str[i] != temp)
        {
            cout << temp << " " << count << endl;
            count = 1;
            temp = str[i];
            continue;
        }
        count++;
    }
    cout << temp << " " << count << endl;
   return 0;
}
