#include<iostream>
using namespace std;

bool prime(int n){
	for(int i=2;i<=n/2.0;i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
 
bool swapable(int n){
	int ge = n % 10;
	int bai = n / 100.0; //double转换成int时舍弃所有小数部分，剩下百位数
	return ge == bai ? true : false;
}
 
int main(){
	for(int i=100;i<1000;i++){
		if(prime(i) && swapable(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}