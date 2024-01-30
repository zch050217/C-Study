#include<stdio.h>
#include<stdlib.h>
FILE *fin,*fout;
int n,f[102][102],max=0,ans=3,y[102], x[102];
double a[102];
void qs(double a[],int x[],int y[],int left,int right){
    if(left>=right) return ;
    int i=left;
    int j=right;
    double key=a[left];
    int key2=x[left],key3=y[left];
     while(i < j)
    {
        while(i < j && key <= a[j]) j--;
          { a[i] = a[j]; x[i]=x[j];y[i]=y[j];}
        while(i < j && key >= a[i]) i++;
           {a[j] = a[i]; x[j]=x[i]; y[j]=y[i];}
    }
    a[i] = key;x[i]=key2;y[i]=key3;
    qs(a,x,y,left,i-1);
    qs(a,x,y,i+1,right);
}
int judge(int x1,int y1,int x2,int y2,int x3,int y3){
    if((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))>0) return 1;
    else return 0;
}
int main(){
    int i,j,t,k;
    fin=fopen("polygon.in","r");
    fout=fopen("polygon.out","w");
    fscanf(fin,"%d",&n);n++;
    x[1]=0;y[1]=0;
    for(i=2;i<=n;i++){
      fscanf(fin,"%d%d",&x[i],&y[i]);
      a[i]=(double)y[i]/x[i];
    }
    qs(a,x,y,2,n);
    for(i=2;i<=n;i++)
     f[1][i]=1;
    for(i=2;i<=n;i++)
     {
         for(j=i+1;j<=n+1;j++)
          {
              if(j==n+1) t=1;
              else t=j;
              for(k=1;k<=i-1;k++){
                  if(judge(x[k],y[k],x[i],y[i],x[t],y[t]))
                   if(f[k][i]+1>f[i][t])
                    f[i][t]=f[k][i]+1;
              }
          }
     }
    for (i = 2; i <= n; i++) {
        if (f[i][1] > ans) {
            ans = f[i][1];
        }
    }
    fprintf(fout, "%d\n", ans);
    fclose(fin);
    fclose(fout);
    return 0;    }

