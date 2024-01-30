#include <bits/stdc++.h>
using namespace std;
int main()
{
    //使用一个bool型标志位来记录一盏灯的亮灭情况
    int n, m;
    bool lightOn;   //标志位 看灯是否亮着
    cin >> n >> m;
    cout << 1;  //1号灯肯定灭 所以直接输出1
    for(int i = 2; i <= n; i++)     //本循环控制第i盏灯
    {
        lightOn = true;     //初始化灯是亮着的
        for(int j = 1; j <= m; j++)        //本循环控制第j个人
            if(i % j == 0)          //如果灯号是人号的倍数
                lightOn = !lightOn;     //灯的状态取非
        if(lightOn == false)        //第i盏灯灭时输出，
            cout << ',' << i;
    }
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool a[5005] = {};//a[i]表示第i号灯是否亮。第1个人将灯全部关闭，因此将所有元素初始化为false。 
    int n, m;//n盏灯，m个人 
    cin >> n >> m;
    for(int i = 2; i <= m; ++i)//i为人编号，从第2个人开始操作 
    {
        for(int j = 1; j <= n; ++j)//j为灯编号，遍历所有的灯 
        {
            if (j % i == 0)//如果灯编号是人编号的倍数 
            {//以下这一段可以写为：a[j] = a[j] ? false : true;
                if(a[j])//如果灯开着，则关上。如果灯关着，则打开。
                    a[j] = false;
                else
                    a[j] = true;
            }
        }
    }
    bool isFirst = true;//是否是第一个要输出的数字 
    for(int j = 1; j <= n; ++j)//遍历所有灯 
    {
        if(a[j] == false)//如果第j盏灯关着 
        {
            if (isFirst)
                isFirst = false;
            else
                cout << ',';
            cout << j;
        }
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;//n盏灯 m个人 
    cout << 1;//1号灯只被第一个人操作，一定是关闭的 
    for(int i = 2; i <= n; ++i)//灯i会被编号为"i的因数"的人操作 
    {
    	int ct = 0;//计数，计该灯被操作多少次 
        for(int j = 1;j <= m; ++j)//j:人编号。看j从1~m，有几个数是i的因数，那么该灯就被操作多少次。 
        {
        	if(i % j == 0)
            	ct++;
        }
        if(ct % 2 == 1)//灯最初是亮着的，进行奇数次操作后，灯会灭 
        	cout << ',' << i;
    }
    return 0;
}
*/