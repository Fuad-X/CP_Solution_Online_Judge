#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int arr[128][2] = { 0 };
		int k;
		cin >> k;
		int l = k;
		while (k--)
		{
			char c;
			cin >> c >> arr[(int)(c)][0];
		}
		int m;
		cin >> m;
		m++;
		while (m)
		{
			char c;
			scanf("%c", &c);
			if (c == '\n' || c == '\r') m--;
			arr[c][1]++;
		}
		long long sum = 0;
		for (int i = 0; i < 128; i++) {

			sum += arr[i][0] * arr[i][1];
		}
		printf("%.2lf$\n", (double)(sum) / 100.0);
	}
	return 0;
}
