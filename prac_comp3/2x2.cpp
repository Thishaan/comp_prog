#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int N_sq = N * N;          
    int r, c;
    int counter = 1;          

    vector<vector<int>> vec(N, vector<int>(N, 0)); 

    vec[0][(N - 1) / 2] = 1;
    r = 0;
    c = (N - 1) / 2;

    int k = 1;

    while (counter <= N_sq) {
        int nr = (r - 1 + N) % N;   
        int nc = (c + 1) % N;

        if (vec[nr][nc] == 0) {
            k++;
            vec[nr][nc] = k;
            r = nr;
            c = nc;
        } else {
           nr= (r + 1) % N;
           if(vec[nr][c] == 0){
            k++;
            r = nr;        
            vec[r][c] = k;
          }
        }

        counter++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

