#include <iostream>
using namespace std;

int calc (int x, int n) {
    if (n%2==0) {
        return 0;
    }
    else {
        return x;
    }
}

int main () {
    int a;
    cin >> a;
    int arr[a] [2];
    for (int i = 0; i<a; i++) {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    for (int i = 0; i<a; i++){
        cout << calc (arr[i][0],arr[i][1]) <<endl;
    }
}