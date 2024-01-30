//完美值总数最大，重量和体积有限制，两个限制条件，for 4
#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];
int o[1010],n[1010],w[1010];

int main(){
	int O,N;
	int num;
	cin>>O>>N>>num;

	for(int i=1;i<=num;i++){
		cin>>w[i]>>o[i]>>n[i];
	}

	memset(dp,0,sizeof(dp));
	dp[0][0]=0;

	for(int i=1;i<=num;i++){
		for(int j=O;j>=o[i];j--){
			for(int k=N;k>=n[i];k--){
				dp[j][k]=max(dp[j][k],dp[j-o[i]][k-n[i]]+w[i]);
			}
		}
	}

	int ans=0;
	  for (int i=0;i<=O;i++)
        for (int j=0;j<=N;j++)
            ans=max(ans,dp[i][j]);
	cout<<ans<<endl;
}