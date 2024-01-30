#include <bits/stdc++.h>
using namespace std;

int b[1000001];

int main() {
	int n;
	cin>>n;

	int a[n];

	for(int i=0; i<n; i++) 
    {
		cin>>a[i];
	}

	b[0]=1;
	b[1]=2;

	for(int i=2; i<=1000000; i++) 
    {
		b[i]=(2*b[i-1]+b[i-2])%32767;
	}

	for(int i=0; i<n; i++)
    {
		cout<<b[a[i]-1]<<endl;
	}
}