#include<stdio.h>
int main(){
	double a,b,c,fa=0,gb=0,hc=0,i=0;
	scanf("%lf %lf %lf",&a,&b,&c);
	//for(i=1;i<=a;i++){
	//	fa=fa+i;
	//}
	for(i=1;i<=b;i++){
		gb=i*i+gb;
	}
	printf("%lf",gb);
	//for(i=1;i<=c;i++){
	//	hc=1/i+hc;
	//}
	//printf("%.4lf",fa+gb+hc);
}