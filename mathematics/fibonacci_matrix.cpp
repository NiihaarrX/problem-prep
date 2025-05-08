#include <iostream>
#include <vector>

using namespace std;

//Generate Fibonacci sequence using matrix exponentiation
vector<vector<int>> matrix_multiply(const vector<vector<int>> &a, const vector<vector<int>> &b) {
    int n = a.size();
    vector<vector<int>> result(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

vector<vector<int>> matrix_power(const vector<vector<int>> &a, int n) {
    int size = a.size();
    vector<vector<int>> result(size, vector<int>(size));
    for (int i = 0; i < size; i++) {
        result[i][i] = 1;
    }
    vector<vector<int>> temp = a;
    while (n > 0) {
        if (n % 2 == 1) {
            result = matrix_multiply(result, temp);
        }
        temp = matrix_multiply(temp, temp);
        n /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> base = {{1, 1}, {1, 0}};
    vector<vector<int>> result = matrix_power(base, n);
    cout << result[0][1] << endl;
    return 0;
}
