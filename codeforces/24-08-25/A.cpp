#include <iostream>
using namespace std;

void swap (float *a, float*b) {
    float temp =*a;
    *a=*b;
    *b=temp; 
}
int Solving(int n,float a[]) {
    double b[n];
        for (int m=0;m<n;m++) {
            if (m==0) {
            b[m]=1;
        }
        else {
            b[m]=a[m-1]/a[m]*b[m-1];   
        }
    }
    cout << b[n-1];
    return b[n-1];
}
void Solution() {
    int n;
    cin >> n;
    float a[n];
    for (int i=0; i <n; i++) {
        cin >> a[i];
    }

    if (Solving(n,a)==1){
        cout << "YES\n";
    }
    else {
        // for (int i=0;i<n;i++) {
        //     cout << a[i] << " ";
        // }
        swap(&a[n-1],&a[n-2]);
        // for (int i=0;i<n;i++) {
        //     cout << a[i] << " ";
        // }
        if (Solving(n,a)==1) {
            cout << "YES \n";
        }
        else {
            cout << "NO \n";
        }
    }
}


int main() {
    int n;
    cin >>n;
    for (int i=0; i<n; i++) {
        Solution();
    }
    return 0;
}