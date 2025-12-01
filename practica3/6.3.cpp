#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int w;
    cin >> w;

    vector<pair<int, int>> mushrooms;
    for (int i = 0; i < w; i++) {
        int r, c;
        cin >> r >> c;
        mushrooms.push_back({r - 1, c - 1});
    }

    vector<vector<int>> field(n, vector<int>(m, 0));

    for (auto& p : mushrooms) {
        int r = p.first;
        int c = p.second;
        field[r][c] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == -1) continue;

            int count = 0;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    if (di == 0 && dj == 0) continue;
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        if (field[ni][nj] == -1) {
                            count++;
                        }
                    }
                }
            }
            field[i][j] = count;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == -1) {
                cout << "*";
            } else {
                cout << field[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}