#include <iostream>
#include <vector>
using namespace std;

int binomialCoeff(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

vector<vector<int>> printPascal(int n) {
    vector<vector<int>> mat;

    for (int row = 0; row < n; row++) {

        vector<int> arr;
        for (int i = 0; i <= row; i++)
            arr.push_back(binomialCoeff(row, i));

        mat.push_back(arr);
    }
    return mat;
}

int main() {
  
    int n = 5;
    vector<vector<int>> mat = printPascal(n);
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}