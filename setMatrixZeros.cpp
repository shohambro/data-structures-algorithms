#include <iostream>
#include <vector>
using namespace std;

void setMatrixZeroes(vector<vector<int>> &mat) {
    int n = mat.size(), m = mat[0].size();
    vector<bool> rows(n, false), cols(m, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (mat[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rows[i] || cols[j])
                mat[i][j] = 0;
        }
    }
}
int main() {
    vector<vector<int> > mat = { { 0, 1, 2, 0 },
                                 { 3, 4, 0, 2 },
                                 { 1, 3, 1, 5 } };

    setMatrixZeroes(mat);
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}