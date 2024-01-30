#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int Num;
    cin >> Num;

    while (Num--) {
        int N;
        cin >> N;

        vector<string> names(N);
        vector<string> votes(N);

        for (int i = 0; i < N; i++) {
            cin >> names[i];
        }

        for (int i = 0; i < N; i++) {
            cin >> votes[i];
        }

        unordered_map<string, int> vote_count;
        string winner = "";
        int max_votes = 0;

        for (int i = 0; i < N; i++) {
            if (names[i] == votes[i]) {
                // Invalid vote, ignore it
                continue;
            }

            vote_count[votes[i]]++;

            if (vote_count[votes[i]] > max_votes) {
                max_votes = vote_count[votes[i]];
                winner = votes[i];
            } else if (vote_count[votes[i]] == max_votes) {
                winner = "";
            }
        }

        cout << winner << endl;
    }

    return 0;
}