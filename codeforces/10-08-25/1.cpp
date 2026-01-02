#include <iostream>
using namespace std;

void  question () {
    int t;
    cin >> t;
    int arr[t];
    for (int l = 0; l<t;l++){
    int  n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    for (int i=0; i<n; i++) {
        cin >> b[i];
    }

    int j=0;
    while (1) {
    j++;
    int i=0;
    while (i<n) {
        if (a[i] < b[i]) { 
            a[i] = a[i] + 1;
            break;
        }
        else {
            i++;
        }
    }
    int m=0;
    int changed = 0;
    while (m<n) {
        if (a[m] > b[m]) {
            a[m] = a[m] - 1;
            changed = 1;
            break;
        }
        else {
            m++;
        }
    }
    if (changed==1) {
        continue;
    }
    else {
        break;
    }
}
    arr[l]=j;
    }
for (int l=0; l<t;l++){
    cout << arr[l] << endl;
}
}

int main() {
    question();
}
