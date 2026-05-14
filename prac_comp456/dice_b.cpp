#include <bits/stdc++.h>

using namespace std;

void count_vals(int val, const vector<int>& vec, int& count) {
    for (const auto& elem : vec) {
        if (elem == val)
            count++;
    }
}

int main() {

    vector<vector<int>> faces(3, vector<int>(6, 0));
    vector<vector<int>> counts(3, vector<int>(3, 0));

    int x;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> x;
            faces[i][j] = x;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            count_vals(4 + j, faces[i], counts[i][j]);
        }
    }
  float result =
    (counts[0][0] * counts[1][1] * counts[2][2] +
     counts[0][0] * counts[1][2] * counts[2][1] +
     counts[0][1] * counts[1][0] * counts[2][2] +
     counts[0][1] * counts[1][2] * counts[2][0] +
     counts[0][2] * counts[1][0] * counts[2][1] +
     counts[0][2] * counts[1][1] * counts[2][0]) / 216.0;

    cout << fixed << setprecision(6) << result << endl;

    return 0;
}
