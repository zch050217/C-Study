#include<stdio.h>
int main()
{
  int n,m,i,j,k,t,a[50][5];
  double sum[50],s[50];
  while(scanf("%d %d",&n,&m)!=EOF)
  {
	  for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	     scanf("%d",&a[i][j]);
	  for(i=0;i<n;i++)
	  { 
		  sum[i]=0;
	  for(j=0;j<m;j++)
	  sum[i]=a[i][j]+sum[i];
	  }
	  for(j=0;j<m;j++)
	  {
		  s[j]=0;
	  for(i=0;i<n;i++)
	  s[j]=a[i][j]+s[j];
	  }
	  for(i=0;i<n;i++)
	  {
	  sum[i]=sum[i]/m;
		if(i==n-1)
		printf("%.2f",sum[i]);
	  else printf("%.2f ",sum[i]);
	  }
	  printf("\n");
	  for(i=0;i<m;i++)
	  { 
	  s[i]=s[i]/n;
       if(i==m-1)
		printf("%.2f",s[i]);
	 else printf("%.2f ",s[i]);
	  }
      printf("\n");
	  t=0;
	  for(i=0;i<n;i++)
	  {for(k=0,j=0;j<m;j++,k++)
			if(a[i][j]<s[k]) break;
            if (j==m)  t++;
	  }
			printf("%d",t);
          printf("\n");
    }
return 0;
}