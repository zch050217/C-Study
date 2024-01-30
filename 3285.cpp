#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	int s = 0;
	for(int i = 1; i < n; ++i)
		if(n % i == 0)
			s += i;
	return s;
}
int main()
{
	int a, b;
    for(int i = 2; true; ++i)
    {
    	a = i;
    	b = sum(a);
    	if(a != b && a == sum(b))
    	{
    		if(a < b)
    			cout << a << ' ' << b;
    		else
    			cout << b << ' ' << a;
			break;
    	}
	}
	return 0;
}
