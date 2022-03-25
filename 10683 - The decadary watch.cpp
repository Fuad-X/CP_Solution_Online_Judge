#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        int hh = str[0]-'0';
        hh*=10;
        hh += str[1]-'0';
        
        int mm = str[2]-'0';
        mm*=10;
        mm += str[3]-'0';
        
        int ss = str[4]-'0';
        ss*=10;
        ss += str[5]-'0';
        
        int cc = str[6]-'0';
        cc*=10;
        cc += str[7]-'0';
        
        int ten = 10000000;
        int tf = (((((24*60)+00)*60)+00)*100)+00;
        
        int n = (((((hh*60)+mm)*60)+ss)*100)+cc;
        
        int ans = (((double)n/tf)*(double)ten);
        printf("%07d\n", ans);
    }
   
   return 0;
}
