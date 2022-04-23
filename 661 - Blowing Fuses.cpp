#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void cpio()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
}

int main()
{
  cpio();

  int n, m, c, s=1;
  while(cin >> n >> m >> c)
  {
    if(n == 0 && m == 0 && c == 0) break;

    int arr[2][n];
    for(int i=0;i<n;i++) {cin >> arr[0][i]; arr[1][i]=0;}

    int check, current = 0, flag = 1, max=0;
    for(int i=0;i<m;i++)
    {
      cin >> check;
      check--;
      if(arr[1][check] == 0) current+=arr[0][check], arr[1][check]=1;
      else current-=arr[0][check], arr[1][check]=0;

      if(current > c) flag = 0;
      if(current > max) max = current;
    }
    cout << "Sequence " << s++ << "\n";
    flag ? cout << "Fuse was not blown.\nMaximal power consumption was " << max <<" amperes.\n\n" : cout << "Fuse was blown.\n\n";
  }
  return 0;
}
