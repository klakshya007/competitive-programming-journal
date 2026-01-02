#include <iostream>
using namespace std;

int calc (int n, int m, int x, int y){
    if (n+m <=2) {
        return 2;
    }
    return n+m;
}

int main() {
    int x;
    cin >> x;
    int arr [x] [4];
    int n, m;
    for  ( int i=0; i<x; i++) {
        cin >> n;
        cin >> m;
        arr[i] [0] = n;
        arr[i] [1] = m;
        cin >> arr[i][2];
        cin >> arr[i][3];
        int ar[n],a[m];
        for (int j=0; j<n; j++){
            cin>>ar[j];
        }
        for (int j=0; j<m; j++){
            cin>>ar[j];
        }
    }

    for (int i=0; i<x; i++){
        cout <<calc (arr[i][0], arr[i][1], arr[i][2], arr[i][3]) <<endl;
    }
}  
