#include<iostream>
#include<cmath>
using namespace std;
double k=1e-8; //定义精度，当high-low<k时停止二分（为1e-7时好像不太行）
double f(double x) //定义函数，返回方程的解
{
    return 8*pow(x,4)+7*pow(x,3)+2*pow(x,2)+3*x+6;
}

int main()
{
    int n;
    double x,y;
    double low,high,mid;
    cin>>n; //输入测试样例数量
    while(n--)
    {
       cin>>y;
       low=0;high=100; //初始化
       if(y>f(high)||y<f(low))  //当f（0）和f（100）都不满足条件时
       {
            cout<<"No solution!"<<endl;
            continue;//退出此次循环，进入下一组数据
       }
       while(high-low>k) //精度要求
       {
           mid=(low+high)/2;
           double t=f(mid);//中间值
           if(t<y)low=mid+k;
           //当中间数小于y时，说明解在这个数后面，将low变为mid+k缩小范围
           else high=mid-k;//反之
       }
     printf("%.4lf\n",mid);//保留后四位小数
    }
  return 0;
}