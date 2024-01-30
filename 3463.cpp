#include <bits/stdc++.h>
using namespace std;
struct edge {
    int u, v, w;
};
bool cmp(edge a, edge b) {
    return a.w < b.w;
}
const int N = 105, M = 10010;
int f[N];
edge e[M];
int n, idx, ans;
int find(int x) {
    if (x == f[x])
        return x;
    return f[x] = find(f[x]);
}
void merge(int x, int y) {
    x = find(x);
    y = find(y);
    f[x] = y;
}
void kruskal() {
    for (int i = 1; i <= idx; ++i) {
        int u = e[i].u, v = e[i].v, w = e[i].w;
        if (find(u) != find(v)) {
            merge(u, v);
            ans += w;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        f[i] = i;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            e[++idx].u = i;
            e[idx].v = j;
            cin >> e[idx].w;
        }
    }
    sort(e + 1, e + 1 + idx, cmp);
    kruskal();
    cout << ans;
    return 0;
}