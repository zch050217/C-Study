#include<bits/stdc++.h>
using namespace std;
double res = 1,x,pi=0;
int main(){
    double i = 1,s = 1;
    x = 1.0/sqrt(3);
    while(res >= 1e-6){
    	res = pow(x,i)/i;
    	pi += res * s;
    	i += 2;
    	s = -s;
    }
    //res = pow(x,i)/i;
    //pi += res * s;
    printf("%.10lf",6 * pi);
    return 0;
}