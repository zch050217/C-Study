#include <stdio.h>
 
 
int main()
{
    int i,n,t;//n：一共多少元素<=20。t：所求子集位于分组后的第几组
    __int64 m;//位于第几个子集
    __int64 c[21]={0};//后面将子集分组后平均每组个数，如:c[2]表示n=2时的分组每组中子集数
    int s[21];//后面将子集按字典序分组后每组的初始首元素,组数<=20
 
 
    for (i=1;i<21;i++)
        c[i]=c[i-1]*(i-1)+1;//推导出来的c[n]=(n-1)*c[n-1]+1
    while (scanf("%d%I64d",&n,&m)!=EOF)
    {
        for(i=0;i<21;i++)
            s[i]=i;//每循环一次就重新归位每组首元素
        while (n>0&&m>0)
        {
            t=m/c[n]+(m%c[n]>0?1:0);
            if(t>0)//得到第m个子集在分组后的第t组,若t>0
            {
                printf("%d",s[t]);
                for(i=t;i<=n;i++)
                    s[i]=s[i+1];//或s[i]+=1,我们发现:第n组中，第2个元素在第n个时变为它的下一个数
                m-=((t-1)*c[n]+1);//减去(t-1组总子集数+1）,m变为表示在剩余子集中位于第几个
                putchar(m==0?'\n':' ');
            }
            n--;//依次递减,直到执行上面的if代码或退出
        }
 
 
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n, t;
    long long m;
    long long c[21] = {0};
    int s[21];

    // 计算每组子集的个数
    for (int i = 1; i < 21; i++) {
        c[i] = c[i - 1] * (i - 1) + 1;
    }

    while (scanf("%d%lld", &n, &m) != EOF) {
        // 初始化每组子集的初始首元素
        for (int i = 0; i < 21; i++) {
            s[i] = i;
        }

        while (n > 0 && m > 0) {
            // 计算子集所在的分组
            t = m / c[n] + (m % c[n] > 0 ? 1 : 0);

            if (t > 0) {
                // 输出子集的首元素
                printf("%d", s[t]);

                // 更新每组子集的初始首元素
                for (int i = t; i <= n; i++) {
                    s[i] = s[i + 1];
                }

                // 更新剩余子集的编号
                m -= ((t - 1) * c[n] + 1);

                // 输出空格或换行
                putchar(m == 0 ? '\n' : ' ');
            }

            // 递减n
            n--;
        }
    }

    return 0;
}
