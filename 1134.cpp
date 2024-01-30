#include <iostream>
#include <cstring>
using namespace std;

#define N 600

int line[N][N];
int used[N];
int boy[N];
int m, n, k;

int find(int x)
{
    for (int j = 1; j <= n; j++)
    {
        if (line[x][j] == 1 && used[j] == 0)
        {
            used[j] = 1;
            if (boy[j] == 0 || find(boy[j]))
            {
                boy[j] = x;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    while (cin >> k && k)
    {
        cin >> m >> n;
        memset(line, 0, sizeof(line));
        memset(boy, 0, sizeof(boy));
        
        int a, b;
        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            line[a][b] = 1;
        }
        
        int all = 0;
        for (int i = 1; i <= m; i++)
        {
            memset(used, 0, sizeof(used));
            if (find(i))
                all++;
        }
        
        cout << all << endl;
    }
    
    return 0;
}