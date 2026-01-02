#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int onedigit(int n) {
    int a;
    vector <int> vec;
    while (n >0)
    {
        a=n%10;
        vec.push_back(a);
        n/=10;
    }
    vector<int>::iterator b=min_element(vec.begin(),vec.end());
    return *b;
}

int main() {
    int x,y,t;
    vector <int> z;
    cin >>t;
    for (int i=0; i<t;i++) {
        cin >> x;
        z.push_back(x);
    }
    for (int i=0; i < t;i++) {
        y=onedigit(z[i]);
        cout << y;
        cout << endl;
    }
}