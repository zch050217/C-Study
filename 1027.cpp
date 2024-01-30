#include <bits/stdc++.h>
using namespace std;

int prime_judge(int n) {
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    if (prime_judge(n)) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}