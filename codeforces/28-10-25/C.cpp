#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionsort(vector<int>& arr) {
    int m = arr.size();
    for (int i = 1; i < m; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int n, m;
    cin >> n;
    vector<vector<int>> answers(n); 

    for (int i = 0; i < n; i++) {
        cin >> m;
        vector<int> num(m);
        for (int j = 0; j < m; j++) {
            cin >> num[j];
        }

        insertionsort(num);   
        answers[i] = num;     
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < answers[i].size(); j++) {
            cout << answers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
