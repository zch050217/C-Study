#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define N 50005

int cnt = 0, head[N], vet[N], next[N], dp[N];

struct node {
    char ch[16];
    int k, len;
} s[N], a[N];

int cmp(node x, node y) {
    if (x.len != y.len)
        return x.len < y.len;
    for (int i = 0; i < x.len; i++)
        if (x.ch[i] != y.ch[i])
            return x.ch[i] < y.ch[i];
    return x.k < y.k;
}

void add(int u, int v) {
    vet[++cnt] = v;
    ::next[cnt] = head[u];
    head[u] = cnt;
}

int main() {
    int n = 0, sum = 0;
    while (cin >> s[++n].ch) {
        int len = strlen(s[n].ch);
        s[n].len = strlen(s[n].ch);
        sum = max(len, sum);
    }
    n--;
    for (int i = 0; i < sum; i++) {
        int tot = 0;
        for (int j = 1; j <= n; j++) {
            tot++;
            a[tot].len = s[j].len;
            for (int k = 0; k < s[n].len; k++)
                a[tot].ch[k] = s[j].ch[k];
            a[tot].k = j;
            if (strlen(s[j].ch) > i) {
                tot++;
                for (int k = 0; k < i; k++)
                    a[tot].ch[k] = s[j].ch[k];
                for (int k = i + 1; k < sum; k++)
                    a[tot].ch[k - 1] = s[j].ch[k];
                a[tot].len = s[j].len - 1;
                a[tot].k = j;
            }
        }
        sort(a + 1, a + tot + 1, cmp);
        for (int i = 1; i < tot; i++) {
            bool flag = true;
            if (a[i].len != a[i + 1].len)
                continue;
            for (int j = 0; j < a[i].len; j++)
                if (a[i].ch[j] != a[i + 1].ch[j]) {
                    flag = false;
                    break;
                }
            if (flag)
                add(a[i].k, a[i + 1].k);
        }
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i], 1);
        for (int j = head[i]; j; j = ::next[j]) {
            int v = vet[j];
            dp[v] = max(dp[i] + 1, dp[v]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);
    cout << ans << endl;
}