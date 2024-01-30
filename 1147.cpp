#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T>0){
		int h,f;
		double m,s,x,y,z;
		scanf("%d %lf %lf",&h,&m,&s);
		h=h%12;
		x=(m+s/60)/60*360;
		y=(h+(m+s/60)/60)/12*360;
		z=fabs(x-y);
		if(z>180){
			z=360-z;
		}
		f=(int)z;
		T--;
		printf("%d\n",f);
	}
}