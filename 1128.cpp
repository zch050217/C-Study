#include<stdio.h>
#include<string.h>
#include<math.h>
long long shiliu(long long n){
	    long long r=16;
		long long i=0,j,h,ret=0,a[1000]={0},flag;
		char x[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		if(n<0){
			flag=0;
			n=fabs(n);
		} else {
			flag=1;
		}
		while(n>0){
				a[i]=n%r;
				n=n/r;
				i++;
		}
		if(flag==0){
			printf("-");
		}
		if(i==0){
			printf("0\n");
		} else {
			for(i=i-1;i>0;i--){
			printf("%c",x[a[i]]);
		}
		printf("%c\n",x[a[i]]);
		}
}
long long sjz(char a[]){
	long long f,i,g=0,zh=0;
	f=strlen(a);
	if(a[0]=='-'){
		for(i=f-1;i>0;i--){
			if(a[i]<='F'&&a[i]>='A'){
				zh+=(a[i]-55)*(long long)pow(16,g);
				g++;
			} else {
				zh+=(a[i]-48)*(long long)pow(16,g);
				g++;
			}
		}
		return -zh;
	} else if(a[0]=='+'){
		for(i=f-1;i>0;i--){
			if(a[i]<='F'&&a[i]>='A'){
				zh+=(a[i]-55)*(long long)pow(16,g);
				g++;
			} else {
				zh+=(a[i]-48)*(long long)pow(16,g);
				g++;
			}
		}
		return zh;
	} else {
		for(i=f-1;i>=0;i--){
			if(a[i]<='F'&&a[i]>='A'){
				zh+=(a[i]-55)*(long long)pow(16,g);
				g++;
			} else {
				zh+=(a[i]-48)*(long long)pow(16,g);
				g++;
			}
		}
		return zh;
	}
}
int main(){
	char x[100],y[100];
	while(scanf("%s %s",x,y)!=EOF){
		long long t1,t2;
		t1=sjz(x);
		t2=sjz(y);
		shiliu(t1+t2);
	}
}