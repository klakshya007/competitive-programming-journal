#include <iostream>

using namespace std;


int reversing(int k,int x) {
    for (int i=1; ;i++){
        int m = i%2;
        ((m)==0)?i/=2:i=3*i+1;
        if (i==x) {
            return i;
        }
    }
}

int main() {
    int m;
    cin >> m;
    int arr [m] [2];
    int k,x;
    for (int i=0; i<m; i++){ //Input
         cin >> arr[i] [0];
         cin >> arr[i] [1];
    }
    for (int i=0; i<m; i++ ) {//Output
        cout << reversing(arr[i][0],arr[i][1]) <<endl;
    }
}