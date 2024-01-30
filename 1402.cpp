#include<bits/stdc++.h>
using namespace std;
long long n , a;
map<long long,int> mp;
int main(){
    cin>>n;
    for (int i = 0 ; i < n ; i++ ){
        cin>>a;
        mp[a]++;
    }
    for(auto t:mp){
        cout<<t.first<<" "<<t.second<<endl;
    }
    return 0;
}