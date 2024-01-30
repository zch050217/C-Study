#include <set>
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int x;
    
    set<int> se;
    while (cin >> n >> m)
    {
        for (int i = 0;i < n;i++) 
        {
            cin >> x;
            se.insert(x);
        }
        
        for (int i = 0;i < m;i++)
        {
            cin >> x;
            se.insert(x);
        }
        
        set<int>::iterator it;
        int cnt = 0;
        for (it = se.begin();it != se.end();it++) 
        {
            cnt ++;
            if (cnt == se.size())
            {
                cout << *it;
                break;
            }
            else cout << *it << " ";
        }
        cout << endl;
        
        se.clear();
    }
    
    return 0;
}