#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int s, n;
        cin >> s >> n;
        for(int i=0; i<(1<<s); i++)
        {
            if(__builtin_popcount(i) == n)
            {
                int j = i, k = s;
                char str[20];
                str[k] = '\0';
                while(k--){
                    str[k] = j%2 + '0';
                    j/=2;
                }
                printf("%s\n", str);
            }
        }
        if(t!=0) printf("\n");
    }
   return 0;
}
