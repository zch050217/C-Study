#include<bits/stdc++.h>

using namespace std;


const int N = 10010, M = 20010, INF = 0x3f3f3f3f;
int n, m;
int d[N];//入度
int pay[N];
int q[N];
int h[N], e[M], ne[M];//邻接表
int idx, ans;//邻接表中的结点编号，不是边的顶点号

//添加一条边 a->b
void add(int a, int b) {
    //e[idx] = b：结点编号为idx的顶点指向b顶点
    //ne[idx] = h[a]：结点编号为idx的下一个结点为头结点的下一个结点（初始-1）
    //h[a] = idx++：表示 顶点号为a的头结点 的下一个结点为idx;
    e[++idx] = b, ne[idx] = h[a], h[a] = idx;
}

bool topsort() {
    int hh = 0, tt = -1;//hh为队头，tt为队尾
    //将度数为0的点全部入队
    for (int i = 1; i <= n; ++i) {
        if (!d[i])
            q[++tt] = i;//入队是++t
    }
    while (hh <= tt) {//队不为空
        int u = q[hh++];//队头
        //遍历u指向的所有边
        for (int i = h[u]; i != -1; i = ne[i]) {
            int v = e[i];//u->v这条边,u所指向的点
            //删除这条边
            d[v]--;
            if (!d[v])
                q[++tt] = v;
            pay[v] = max(pay[v], pay[u] + 1);
        }
    }
    return tt == n - 1;//进队过n个点
}

int main() {
    cin.tie(0);
    //使头结点的最后一个结点编号都为-1,作为后续循环结束条件
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for (int i = 1; i <= n; ++i) {
        pay[i] = 100;
    }
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        //注意这条边是：b->a
        add(b, a);
        d[a]++;
    }
    if (topsort()) {
        for (int i = 1; i <= n; ++i) {
            ans += pay[i];
        }
        cout << ans;
    } else {
        puts("Poor Xed");
    }
}
