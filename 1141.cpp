#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	__int64 s[100];
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==-1)break;
		s[0]=0;
		s[1]=1;
		s[2]=1;
		for(int i=3;i<=n;++i)
		{
			s[i]=s[i-1]+s[i-2];
		}
		printf("%I64d\n",s[n]);
	}
	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int MAX_N = 100;
    long long s[MAX_N];

    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == -1)
            break;

        s[0] = 0;
        s[1] = 1;
        s[2] = 1;

        for (int i = 3; i <= n; ++i)
        {
            s[i] = s[i - 1] + s[i - 2];
        }

        printf("%lld\n", s[n]);
    }

    return 0;
}
