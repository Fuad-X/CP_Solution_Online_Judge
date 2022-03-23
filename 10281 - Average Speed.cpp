#include <iostream>
using namespace std;
 
int main() {
	int h,m,s;
	long long speed = 0;
	double distance = 0;
	int hh = 0, mm = 0, ss = 0;
	string str;
	
	while(getline(cin, str))
	{
		h = (str[0]-'0')*10;
		h+= str[1]-'0';
 
		m = (str[3]-'0')*10;
		m+= str[4]-'0';
 
		s = (str[6]-'0')*10;
		s+= str[7]-'0';
		
		int p = s, q = m, r = h;
		
		if(ss > s)
		{
			int x = 60-ss;
			s+=x;
			mm++;
		}
		else
		{
			s = s-ss;
		}
		if(mm > m)
		{
			int x = 60-mm;
			m+=x;
			hh++;
		}
		else
		{
			m = m-mm;
		}
		
		h = h-hh;
 
		distance+= h*speed;
		distance+= (m/60.0)*speed;
		distance+= (((s/60.0)/60.0))*speed;
 
		if(str.length()!=8)
		{
			speed = 0;
			for(int i=9; i<str.length(); i++)
			{
				speed*=10;
				speed+=str[i]-'0';
			}
		}
		else
		{
			printf("%02d:%02d:%02d %.2lf km\n", r, q, p, distance);
		}
		
		hh = r, mm = q, ss = p;
	}
	return 0;
}
