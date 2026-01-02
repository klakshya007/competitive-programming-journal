#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int rows;
    cin >> rows;

    vector<vector<int>> vec(rows);

    for (int i = 0; i < rows; i++) {
        int cols;
        cin >> cols;
        vec[i].resize(cols);

        for (int j = 0; j < cols; j++) {
            cin >> vec[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {

        // ----- fix FIRST and LAST before loop -----
        if (vec[i][0] == -1)
            vec[i][0] = vec[i].back();

        if (vec[i].back() == -1)
            vec[i].back() = vec[i][0];

        // ----- fix middle values -----
        for (int j = 1; j < vec[i].size() - 1; j++) {
            if (vec[i][j] == -1)
                vec[i][j] = 0;
        }

        // absolute difference of first and last
        int diff = abs(vec[i][0] - vec[i].back());
        cout << diff << endl;

        // print row
        for (int x : vec[i]) cout << x << " ";
        cout << endl;
    }

    return 0;
}
